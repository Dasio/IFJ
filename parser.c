#include "parser.h"
#include "expr.h"

static Scanner scanner;
TokenVector *tokenVector;
Token *token;
Context *mainContext;
Context *funcContext;
Context *activeContext;
ArgList *argList;

void parse()
{
	scanner = initScanner();
	assignFile(&scanner.input, "testFile2.txt");
	tokenVector = getTokenVector(&scanner);

	mainContext = InitContext();
	activeContext = mainContext;
	token = TokenVectorFirst(tokenVector);
	argList = initArgList();

	program();
	if(getError())
		printError();
	// Cleanup
	freeArgList(argList);
	free(argList);
	destroyTokenVector(tokenVector);
	FreeContext(mainContext);
	destroyScanner(&scanner);
}
void program()
{
	var_declr();
	if(getError())
		return;

	func();
	if(getError())
		return;

	compound_stmt(0);
	if(getError())
		return;

	token++;
	if(token->type != TT_dot)
	{
		setError(ERR_Syntax);
		return;
	}
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
	Symbol *x = SymbolAdd(activeContext, symbolType, name, NULL, NULL);
	if(getError())
		return;
	printf("Symbol added name = %s type = %d, index = %d\n",x->name,x->type,x->index);
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
	SymbolType returnType;
	token++;
	if(token->type != TT_identifier)
	{
		setError(ERR_Syntax);
		return;
	}
	name = token->str.data;
	param_def_list();
	if(getError())
		return;

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
			returnType = keywordToSymbol(token->keyword_token);
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

	forward(returnType,name);
	if(getError())
		return;

	func();
	if(getError())
		return;
}
void forward(SymbolType returnType, char *name)
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
	// Add declaration of function to GST
	Symbol *x = addFunction(returnType,name,FS_Declared);
	if(getError())
		return;
	printf("Function(Declaration) name = %s type = %d, index = %d, argsCount = %d\n",x->name,x->type,x->index,funcContext->argCount);
	}
	// 2. rule = Function Definition
	else
	{
		// Add definition of function to GST
		Symbol *x = addFunction(returnType,name,FS_Defined);
		if(getError())
			return;
		printf("Function(Definition) name = %s type = %d, index = %d, argsCount = %d\n",x->name,x->type,x->index,funcContext->argCount);

		// Switch to function context
		activeContext = funcContext;
		var_declr();
		if(getError())
			return;

		compound_stmt(1);
		if(getError())
			return;
		// Switch back to main context
		activeContext = mainContext;
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
	if(getError())
		return;

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
	addArgToList(argList,name,symbolType);
	if(getError())
		return;
	/*SymbolTable *x = AddArgToContext(funcContext, symbolType, name, NULL);
	if(getError())
		return;
	printf("Symbol(Variable) added name = %s type = %d, index = %d\n",x->data.name,x->data.type,x->data.index);
*/
	params_def(1);
	if(getError())
		return;

}
void term_list()
{
	token++;
	if(token->type != TT_leftBrace)
	{
		setError(ERR_Syntax);
		return;
	}

	terms(0);
	if(getError())
		return;

	// Token loaded from terms
	if(token->type != TT_rightBrace)
	{
		setError(ERR_Syntax);
		return;
	}
}
void terms(uint8_t next)
{
	if(next)
	{
		token++;
		// Epsilon rule
		if(token->type != TT_comma)
			return;
	}
	token++;
	// If token is not term(bool,int,double,string)
	if(token->type < TT_real || token->type > TT_bool)
	{
		setError(ERR_Syntax);
		return;
	}

	terms(1);
	if(getError())
		return;
}
void compound_stmt(uint8_t semicolon)
{
	if(token->type != TT_keyword || token->keyword_token != Key_begin)
	{
		setError(ERR_Syntax);
		return;
	}
	stmt_empty();
	if(getError())
		return;

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
	if(getError())
		return;

	stmt_list();
	if(getError())
		return;
}
void stmt_empty()
{
	token++;
	// Check epsilon rule
	uint8_t epsilon = stmt(1);
	if(getError())
		return;
	// Epsilon rule was used
	if(epsilon)
		return;

	stmt_list();
	if(getError())
		return;

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
			token--;
			if(getError())
				return 0;
			break;
		case TT_keyword:
			switch(token->keyword_token)
			{
				// 2. rule = IF Statement
				case Key_if:
					expr();
					if(getError())
						return 0;

					if(token->type != TT_keyword || token->keyword_token != Key_then)
					{
						setError(ERR_Syntax);
						return 0;
					}
					// compound_stmt expect already loaded token
					token++;
					compound_stmt(0);
					if(getError())
						return 0;

					epsilon = if_n();
					if(getError())
						return 0;
					break;
				// 3. rule = While cycle
				case Key_while:
					expr();
					if(getError())
						return 0;

					if(token->type != TT_keyword || token->keyword_token != Key_do)
					{
						setError(ERR_Syntax);
						return 0;
					}
					// compound_stmt expect already loaded token
					token++;
					compound_stmt(0);
					if(getError())
						return 0;
					break;
				case Key_begin:
					compound_stmt(0);
					if (getError())
						return 0;
					break;
				case Key_readln:
					readln();
					if(getError())
						return 0;
					break;
				case Key_write:
					write();
					if(getError())
						return 0;
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

	if(getError())
		return 0;
	return 0;
}

void readln()
{
	// keyword readln already loaded from STMT
	token++;
	if(token->type != TT_leftBrace)
	{
		setError(ERR_Syntax);
		return;
	}

	token++;
	if(token->type != TT_identifier)
	{
		setError(ERR_Syntax);
		return;
	}

	token++;
	if(token->type != TT_rightBrace)
	{
		setError(ERR_Syntax);
		return;
	}
}

void write()
{
	// keyword write already loaded from STMT
	term_list();
}

Symbol *addFunction(SymbolType returnType,char* name,FuncState funcState)
{
	Symbol *symbol = SymbolFind(mainContext, name);
	// Function was already in GST
	if(symbol)
	{
		if(funcState == FS_Defined)
		{
			// If was already defined -> error
			if (symbol->stateFunc == FS_Defined)
			{
				setError(ERR_RedefFunc);
				return NULL;
			}
			// In GST is just declaration
			else
			{
				if(funcContext->argCount != argList->argCount)
				{
					setError(ERR_BadDefArg);
					return NULL;
				}
				Argument *arg = argList->head;
				for(uint32_t i=0;i<funcContext->argCount;i++)
				{
					Symbol *symbol = funcContext->arg[i];
					if(symbol->type != arg->type || strcmp(symbol->name,arg->name) != 0)
					{
						setError(ERR_BadDefArg);
						return NULL;
					}
				}
				printf("Defined -> ");
				symbol->stateFunc = FS_Defined;
			}
		}
		else
		{
			setError(ERR_DeclrFunc);
			return NULL;
		}
	}
	// Create new function
	else
	{
		printf("Added to GST -> ");
		funcContext = InitContext();
		if(getError())
			return NULL;
		symbol = SymbolAdd(mainContext, T_FunPointer, name, funcContext, NULL);
		if(getError())
			return NULL;
		symbol->stateFunc = funcState;
		funcContext->returnType = returnType;
		// From argList add every argument to context
		for(Argument *arg = argList->head; arg; arg = arg->next)
		{
			AddArgToContext(funcContext, arg->type, arg->name, NULL);
			if(getError())
				return NULL;
		}
		// erase old arguments from arglist
		freeArgList(argList);
	}
	return symbol;
}
