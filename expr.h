#include "symbol.h"
#include "error.h"
#include "parser.h"

#ifndef EXPR_H
#define EXPR_H

/*#define TERM 128
#define is_term(token) (token->type & TERM)*/
#define precedence(type1, type2)

typedef enum { ON_STACK, IN_TOKEN } Tplacement;

typedef struct
{
	union
    {
        Token *token;
        int64_t index;
    };
    Tplacement location;
} ExprToken;


// after a call of expr(), value of the expression is stored on the top of stack
void expr();
void TokenVectorPrint(ExprTokenVector *tokenVector);


#endif
