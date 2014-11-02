#include "parser.h"

static Token token;
static Scanner scanner;
extern int tindex;
void program()
{
	scanner = initScanner();
	assignFile(&scanner.input, "testFile2.txt");

	token = getToken(&scanner);

	var_declr();
	if(getError()) return;
	
	func();
	if(getError()) return;

	compound_stmt(0);
	if(getError()) return;

	// @TODO, dot have to be at end

	destroyScanner(&scanner);
}
void var_declr()
{

	// Epsilon rule
	if(token.type != TT_keyword || token.keywordToken != Key_var)
		return;
	// literal 'var' loaded
	var_def(0);
	if(getError())
		return;
}
void var_def(uint8_t next)
{
	token = getToken(&scanner);
	if(token.type != TT_identifier)
	{
		// Epsilon rule - VAR_DEFN - just return, no error
		if(!next)
			setError(ERR_Syntax);
		return;
	}
	token = getToken(&scanner);
	if(token.type != TT_colon)
	{
		setError(ERR_Syntax);
		return;
	}

	// Check if token is type
	token = getToken(&scanner);
	if(token.type != TT_keyword)
	{
		setError(ERR_Syntax);
		return;
	}
	switch(token.keywordToken)
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

	token = getToken(&scanner);
	if(token.type != TT_semicolon)
	{
		setError(ERR_Syntax);
		return;
	}

	var_def(1);
	if(getError())
		return;

}
void func()
{
	// Epsilon rule, just return, no error
	if(token.type != TT_keyword || token.keywordToken != Key_function)
		return;
	// keyword 'function' loaded
	token = getToken(&scanner);
	if(token.type != TT_identifier)
	{
		setError(ERR_Syntax);
		return;
	}

	param_list();
	if(getError()) return;

	token = getToken(&scanner);
	if(token.type != TT_colon)
	{
		setError(ERR_Syntax);
		return;
	}

	token = getToken(&scanner);
	//Check if token is type
	if(token.type != TT_keyword)
	{
		setError(ERR_Syntax);
		return;
	}
	switch(token.keywordToken)
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

	token = getToken(&scanner);
	if(token.type != TT_semicolon)
	{
		setError(ERR_Syntax);
		return;
	}

	forward();
	if(getError()) return;

	func();
	if(getError()) return;
}
void forward()
{
	token = getToken(&scanner);
	// 1. rule = Function Forward Declaration
	if(token.type == TT_keyword && token.keywordToken == Key_forward)
	{
		token = getToken(&scanner);
		if(token.type != TT_semicolon)
		{
			setError(ERR_Syntax);
			return;
		}
	}
	// 2. rule = Function Definition
	else
	{
		var_declr();
		if(getError()) return;

		compound_stmt(1);
		if(getError()) return;
	}
	// Need load next token
	token = getToken(&scanner);
}
void param_list()
{
	token = getToken(&scanner);
	if(token.type != TT_leftBrace)
	{
		setError(ERR_Syntax);
		return;
	}

	params(0);
	if(getError()) return;

	// Token loaded from params
	if(token.type != TT_rightBrace)
	{
		setError(ERR_Syntax);
		return;
	}
}
void params(uint8_t next)
{
	token = getToken(&scanner);
	// Epsilon rule
	if(!next && token.type != TT_identifier)
		return;
	if(next && token.type != TT_semicolon)
		return;
	// Get from PARAMS_N to PARAMS to simplify code
	// semicolon loaded, now we need load identifier
	if(next)
	{
		token = getToken(&scanner);
		if(token.type != TT_identifier)
		{
			setError(ERR_Syntax);
			return;
		}
	}

	token = getToken(&scanner);
	if(token.type != TT_colon)
	{
		setError(ERR_Syntax);
		return;
	}

	token = getToken(&scanner);
	if(token.type != TT_keyword)
	{
		setError(ERR_Syntax);
		return;
	}
	switch(token.keywordToken)
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

	params(1);
	if(getError()) return;

}
void compound_stmt(uint8_t semicolon)
{
	if(token.type != TT_keyword || token.keywordToken != Key_begin)
	{
		printf("%d\n",tindex);
			tokenInfo(&token);
		setError(ERR_Syntax);
		return;
	}
	stmt();
	if(getError()) return;

	stmt_list();
	if(getError()) return;

	// token loaded from stmt()

	if(token.type != TT_keyword || token.keywordToken != Key_end)
	{
		setError(ERR_Syntax);
		return;
	}

	if(semicolon)
	{
		token = getToken(&scanner);
		// @TODO: Cleanup DIRTY HACKFIX
		// it works but i have no idea how, its too late
		if(token.type == TT_keyword && token.keywordToken == Key_end)
			token = getToken(&scanner);
		
		if(token.type != TT_semicolon)
		{
			printf("%d\n",tindex);
			tokenInfo(&token);
			setError(ERR_Syntax);
			return;
		}
	}
}

void stmt_list()
{
	// token loaded from stmt()
	// epsilon rule
	if(token.type != TT_semicolon)
		return;
	//if(token.type == TT_keyword && token.keywordToken == Key_end)
	//	return;

	stmt();
	if(getError()) return;

	stmt_list();
	if(getError()) return;
}
void stmt()
{
	token = getToken(&scanner);
	switch(token.type)
	{
		// 1. rule = assignment
		case TT_identifier:
			token = getToken(&scanner);
			if(token.type != TT_assignment)
			{
				setError(ERR_Syntax);
				return;
			}
			expr();
			if(getError()) return;
			break;
		case TT_keyword:
			switch(token.keywordToken)
			{
				// 2. rule = IF_Statement
				case Key_if:
					expr();
					if(getError()) return;

					token = getToken(&scanner);
					if(token.type != TT_keyword || token.keywordToken != Key_then)
					{
						setError(ERR_Syntax);
						return;
					}
					// compound_stmt expect already loaded token
					token = getToken(&scanner);
					compound_stmt(0);
					if(getError()) return;
					if_n();

					break;
				// 3. rule = WHILE cycle
				case Key_while:
					expr();
					if(getError()) return;

					token = getToken(&scanner);
					if(token.type != TT_keyword || token.keywordToken != Key_do)
					{
						setError(ERR_Syntax);
						return;
					}

					// compound_stmt expect already loaded token
					token = getToken(&scanner);
					compound_stmt(0);
					if(getError()) return;
					break;
				default:
					return;
			}
		default:
			return;
	}
	token = getToken(&scanner);
}
void if_n()
{
	token = getToken(&scanner);
	// Epsilon rule
	if(token.type != TT_keyword || token.keywordToken != Key_else)
		return;
	switch(token.keywordToken)
	{
		case Key_else:
			token = getToken(&scanner);
			// Compound_stmt expect loaded next token
			compound_stmt(0);
			if(getError()) return;
			break;
		//@TODO elseif, if we want implement it
		default:
			setError(ERR_Syntax);
			return;
	}
}
void expr()
{
	// @TODO bottom-up parser

	//just for testing, expect one number
	token = getToken(&scanner);
	if(token.type != TT_integer)
	{
		setError(ERR_Syntax);
		return;
	}
}
