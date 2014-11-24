#include "system.h"
#include "string.h"
#include "token.h"

Token initToken() {
	Token t = {
		.type = TT_empty,
		// TODO : String shall not malloc before appending char
		.str = initEmptyString()
	};

	return t;
}

void destroyToken(Token *token) {
	assert(token);
	destroyString(&token->str);
}

void tokenInfo(Token *token) {
	assert(token);
	switch(token->type) {
		case TT_identifier: {
			printf("Token str : ");
			printString(&token->str);
			break;
		}
		case TT_keyword: {
			printf("Keyword %s", stringifyToken(token));
			break;
		}
		default: break;
	}
	printf(" , type : %d\n", token->type);
}

char *stringifyToken(Token *token) {
	switch(token->type)
	{
		case TT_assignment:
			return(":=");
		case TT_colon:
			return(":");
		case TT_comma:
			return(",");
		case TT_division:
			return("/");
		case TT_dot:
			return(".");
		case TT_equality:
			return("=");
		case TT_greater :
			return(">");
		case TT_greaterOrEqual:
			return(">=");
		case TT_identifier:
			return(token->str.data);
		case TT_inequality:
			return("<>");
		case TT_less:
			return("<");
		case TT_lessOrEqual:
			return("<=");
		case TT_leftBrace:
			return("(");
		case TT_leftCurlyBrace:
			return("{");
		case TT_leftSquareBrace:
			return("[");
		case TT_minus:
			return("-");
		case TT_multiply:
			return("*");
		case TT_plus:
			return("+");
		case TT_rightBrace:
			return(")");
		case TT_rightCurlyBrace:
			return("}");
		case TT_rightSquareBrace:
			return("]");
		case TT_semicolon:
			return(";");
		case TT_string:
			return token->str.data;
		case TT_integer:
			// FIXME: Uses bug
			return token->str.data;
		case TT_keyword:
			switch (token->keyword_token)
			{
				case Key_begin:
					return("begin");
				case Key_boolean:
					return("boolean");
				case Key_div:
					return("div");
				case Key_do:
					return("do");
				case Key_else:
					return("else");
				case Key_end:
					return("end");
				case Key_false:
					return("false");
				case Key_find:
					return("find");
				case Key_forward:
					return("forward");
				case Key_function:
					return("function");
				case Key_if:
					return("if");
				case Key_integer:
					return("integer");
				case Key_readln:
					return("readln");
				case Key_real:
					return("real");
				case Key_sort:
					return("sort");
				case Key_string:
					return("string");
				case Key_then:
					return("then");
				case Key_true:
					return("true");
				case Key_var:
					return("var");
				case Key_while:
					return("while");
				case Key_write:
					return("write");
				default: {
					fprintf(stderr, "Kw type : %d\n", token->keyword_token);
					assert(false && "Unknown keyword");
					return("Unknown keyword");
				}
			}
		default: {
			fprintf(stderr, "Token type : %d\n", token->type);
			assert(false && "Received unknown token!");
			return("N/A");
		}
	}
}
