#include "symbol.h"
#include "error.h"
#include "vector.h"
#include "token.h"
#include "system.h"
#include "instruction.h"

#ifndef EXPR_H
#define EXPR_H

#define EXPR_ERROR -1

typedef enum { TERM, NONTERM } ExprTokenType;

typedef struct
{
	Token *token; // data of TERM
	Operand E; // data of NONTERM

	ExprTokenType type;	// TERM / NONTERM
	bool handle_start; 	// handle is starting on this if this flag is true

} ExprToken;

GenVectorPrototypes(ExprToken)

typedef struct
{
	ExprTokenVector *expr_vector;
	ExprToken *first; // first token of handle
	ExprToken *last; // last token of handle (last token in vector)
	int first_index; // index to first token in handle
	int last_index; // index to last token in handle
	int tokens_count; // number of tokens in handle
} THandle;

/**
 * Vector generation of type ExprToken
 */


// after a call of expr(), value of the expression is stored on the top of stack
DataType expr();
void ExprTokenVectorPrint(ExprTokenVector *expr_token_vector);



#endif
