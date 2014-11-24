#include "parser.h"
#include "expr.h"

static Scanner scanner;
Token *token;
Context *mainContext;
Context *funcContext;
Context *activeContext;
uint32_t argsCount = 0;
int locMIndex = 1;
int locFIndex = 1;
int *locIndex = &locMIndex;
int argIndex = -1;
static const uint32_t argsMax = 128;

void parse()
{
	scanner = initScanner();
	assignFile(&scanner.input, "testFile2.txt");
	TokenVector *tokenVector = getTokenVector(&scanner);

	mainContext = InitContext(0);
	activeContext = mainContext;
	token = TokenVectorFirst(tokenVector);

	program();
	if(getError())
		printError();
	// Cleanup
	destroyTokenVector(tokenVector);
	FreeContext(mainContext);
	destroyScanner(&scanner);
}
void program()
{
	var_declr();
	if(getError()) return;

	func();
	if(getError()) return;

	compound_stmt(0);
	if(getError()) return;

	// @TODO, dot have to be at end
	// Check if every token was parsed
	token++;
	if(token->type != TT_empty)
	{
		setError(ERR_Syntax);
		return;
	}

}
void var_declr()
{

	// Epsilon rule
	if(token->type != TT_keyword || token->keyword_token != Key_var)
		return;
	// literal 'var' loaded
	var_def(0);
	if(getError())
		return;
}
void var_def(uint8_t next)
{
	char *name;
	SymbolType symbolType;
	token++;
	if(token->type != TT_identifier)
	{
		// Epsilon rule - VAR_DEFN - just return, no error
		if(!next)
			setError(ERR_Syntax);
		return;
	}
	name = token->str.data;
	token++;
	if(token->type != TT_colon)
	{
		setError(ERR_Syntax);
		return;
	}

	// Check if token is type
	token++;
	if(token->type != TT_keyword)
	{
		setError(ERR_Syntax);
		return;
	}
	switch(token->keyword_token)
	{
		case Key_boolean:
		case Key_integer:
		case Key_real:
		case Key_string:
			symbolType = keywordToSymbol(token->keyword_token);
			break;
		default:
			setError(ERR_Syntax);
			return;
	}

	token++;
	if(token->type != TT_semicolon)
	{
		setError(ERR_Syntax);
		return;
	}
	// Add variable to symbol table
	SymbolTable *x = SymbolAdd(activeContext, symbolType, name, NULL);
	if(getError())
		return;
	printf("Symbol added name = %s type = %d, index = %d\n",x->data.name,x->data.type,x->data.index);
	var_def(1);
	if(getError())
		return;

}
void func()
{
	// Epsilon rule, just return, no error
	if(token->type != TT_keyword || token->keyword_token != Key_function)
		return;
	// keyword 'function' loaded
	char *name;
	// New function => need to reset values
	argsCount = locFIndex= 0;
	argIndex=-1;

	token++;
	if(token->type != TT_identifier)
	{
		setError(ERR_Syntax);
		return;
	}
	name = token->str.data;
	funcContext = InitContext(argsMax);
	param_def_list();
	if(getError()) return;

	token++;
	if(token->type != TT_colon)
	{
		setError(ERR_Syntax);
		return;
	}

	token++;
	//Check if token is type
	if(token->type != TT_keyword)
	{
		setError(ERR_Syntax);
		return;
	}
	switch(token->keyword_token)
	{
		case Key_boolean:
		case Key_integer:
		case Key_real:
		case Key_string:
			//dosmth
			break;
		default:
			setError(ERR_Syntax);
			return;
	}

	token++;
	if(token->type != TT_semicolon)
	{
		setError(ERR_Syntax);
		return;
	}
	// Add function to global symbol table
	SymbolTable *x = SymbolAdd(mainContext, T_FunPointer, name, funcContext);
	if(getError())
		return;
	printf("Symbol(Function) added name = %s type = %d, index = %d, argsCount = %d\n",x->data.name,x->data.type,x->data.index,funcContext->ArgCount);

	forward();
	if(getError()) return;

	func();
	if(getError()) return;
}
void forward()
{
	token++;
	// 1. rule = Function Forward Declaration
	if(token->type == TT_keyword && token->keyword_token == Key_forward)
	{
		token++;
		if(token->type != TT_semicolon)
		{
			setError(ERR_Syntax);
			return;
		}
	}
	// 2. rule = Function Definition
	else
	{
		// Switch to function context
		activeContext = funcContext;
		locIndex = &locFIndex;
		var_declr();
		if(getError()) return;

		compound_stmt(1);
		if(getError()) return;
		// Switch back to main context
		activeContext = mainContext;
		locIndex = &locMIndex;
	}
	// Need load next token
	token++;
}
void param_def_list()
{
	token++;
	if(token->type != TT_leftBrace)
	{
		setError(ERR_Syntax);
		return;
	}

	params_def(0);
	if(getError()) return;

	// Token loaded from params
	if(token->type != TT_rightBrace)
	{
		setError(ERR_Syntax);
		return;
	}
}
void params_def(uint8_t next)
{
	token++;
	// Epsilon rule
	if(!next && token->type != TT_identifier)
		return;
	if(next && token->type != TT_semicolon)
		return;
	// Get from PARAMS_DEF_N to PARAMS_DEF to simplify code
	// semicolon loaded, now we need load identifier
	if(next)
	{
		token++;
		if(token->type != TT_identifier)
		{
			setError(ERR_Syntax);
			return;
		}
	}
	char *name = token->str.data;
	SymbolType symbolType;
	token++;
	if(token->type != TT_colon)
	{
		setError(ERR_Syntax);
		return;
	}

	token++;
	if(token->type != TT_keyword)
	{
		setError(ERR_Syntax);
		return;
	}
	switch(token->keyword_token)
	{
		case Key_boolean:
		case Key_integer:
		case Key_real:
		case Key_string:
			symbolType = keywordToSymbol(token->keyword_token);
			break;
		default:
			setError(ERR_Syntax);
			return;
	}
	SymbolTable *x = AddArgToContext(funcContext, symbolType, name, NULL);
	if(getError())
		return;
	printf("Symbol(Variable) added name = %s type = %d, index = %d\n",x->data.name,x->data.type,x->data.index);

	params_def(1);
	if(getError()) return;

}
void compound_stmt(uint8_t semicolon)
{
	if(token->type != TT_keyword || token->keyword_token != Key_begin)
	{
		setError(ERR_Syntax);
		return;
	}
	stmt_empty();
	if(getError()) return;

	// token loaded from stmt()

	if(token->type != TT_keyword || token->keyword_token != Key_end)
	{
		setError(ERR_Syntax);
		return;
	}

	if(semicolon)
	{
		token++;
		if(token->type != TT_semicolon)
		{
			setError(ERR_Syntax);
			return;
		}
	}
}

void stmt_list()
{
	// token loaded from stmt()
	// epsilon rule
	if(token->type != TT_semicolon)
		return;

	stmt(0);
	if(getError()) return;

	stmt_list();
	if(getError()) return;
}
void stmt_empty()
{
	token++;
	// Check epsilon rule
	uint8_t epsilon = stmt(1);
	if(getError()) return;
	// Epsilon rule was used
	if(epsilon) return;

	stmt_list();
	if(getError()) return;

}
uint8_t stmt(uint8_t empty)
{
	uint8_t epsilon = 0;
	// IF wasnt called from stmt_empty(), need to load next token
	if(!empty) token++;
	switch(token->type)
	{
		// 1. rule = Assignemnt
		case TT_identifier:
			token++;
			if(token->type != TT_assignment)
			{
				setError(ERR_Syntax);
				return 0;
			}
			expr();
			if(getError()) return 0;
			break;
		case TT_keyword:
			switch(token->keyword_token)
			{
				// 2. rule = IF Statement
				case Key_if:
					expr();
					if(getError()) return 0;

					token++;
					if(token->type != TT_keyword || token->keyword_token != Key_then)
					{
						setError(ERR_Syntax);
						return 0;
					}
					// compound_stmt expect already loaded token
					token++;
					compound_stmt(0);
					if(getError()) return 0;

					epsilon = if_n();
					if(getError()) return 0;
					break;
				// 3. rule = While cycle
				case Key_while:
					expr();
					if(getError()) return 0;

					token++;
					if(token->type != TT_keyword || token->keyword_token != Key_do)
					{
						setError(ERR_Syntax);
						return 0;
					}
					// compound_stmt expect already loaded token
					token++;
					compound_stmt(0);
					if(getError()) return 0;
					break;
				case Key_begin:
					compound_stmt(0);
					if (getError()) return 0;
					break;
				case Key_find:
				case Key_readln:
				case Key_sort:
				case Key_write:
					//param_list();
					if(getError) return 0;
					break;
				default:
					if(empty) return 1;
					else
					{
						setError(ERR_Syntax);
						break;
					}
			}
			break;
		default:
			// Epsilon rule used
			if(empty) return 1;
			else
			{
				setError(ERR_Syntax);
				break;
			}
	}
	// Need to load next token for stmt_list() if wasnt loaded before by epsilon rule
	if(!epsilon) token++;
	return 0;
}
uint8_t if_n()
{
	token++;
	// Epsilon rule
	if(token->type != TT_keyword || token->keyword_token != Key_else)
		return 1;
	// keyword 'else' loaded
	token++;
	// Compound_stmt expect loaded next token
	compound_stmt(0);

	if(getError()) return 0;
	return 0;
}
