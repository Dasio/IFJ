#include "expr.h"

extern Token *token;
//Context *mainContext;
//Context *funcContext;
//Context *activeContext;


void expr()
{
	//just for testing, expect one number
	token++;
	if(token->type != TT_integer)
	{
		setError(ERR_Syntax);
		return;
	}
}
