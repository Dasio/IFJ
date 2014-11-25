#ifndef EXPR_H
#define EXPR_H

#include "symbol.h"
#include "error.h"
#include "stack.h"
#include "parser.h"



// after a call of expr(), value of the expression is stored on the top of stack
void expr();
void TokenVectorPrint(TokenVector *tokenVector);


#endif
