#include "symbol.h"
#include "error.h"
#include "vector.h"
#include "token.h"

#ifndef EXPR_H
#define EXPR_H

/*#define TERM 128
#define is_term(token) (token->type & TERM)*/
//#define precedence(type1, type2) do {} while(0)

typedef enum { TERM, NONTERM } ExprToken_type;

typedef struct
{
	union
	{
		Token *token;
		uint64_t index;
	};
	ExprToken_type type;

} ExprToken;

/**
 * Vector generation of type ExprToken
 */
GenVectorPrototypes(ExprToken)

// after a call of expr(), value of the expression is stored on the top of stack
void expr();
ExprToken *allocExprToken();
void destroyExprToken(ExprToken *expr_token);
void ExprTokenVectorPrint(ExprTokenVector *expr_token_vector);



#endif
