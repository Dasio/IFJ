#include "expr.h"

extern Token *token;
Context *mainContext;
Context *funcContext;
Context *activeContext;
/*
if(token->type != TT_integer)
	{
		setError(ERR_Syntax);
		return;
	}
*/


void expr()
{
	token++;

}
