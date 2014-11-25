#include "expr.h"
#include "vector.h"

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
	TokenVector *tokenVector = TokenInitVector(32);
	Token empty = initToken();
	TokenVectorAppend(tokenVector, empty); // first token, (empty = $)

	token++;
	TokenVectorAppend(tokenVector, *token);

	TokenVectorPrint(tokenVector);

	if((token->type & 128) != 1) // Term ?
	{
		setError(ERR_Syntax);
		return;
	}




}

void TokenVectorPrint(TokenVector *tokenVector)
{
	//printf("\n");

	for (uint32_t i = 0; i < tokenVector->used; i++)
	{
		printf("%s ", stringifyToken(TokenVectorAt(tokenVector, i)));
	}
	printf("\n");
}
