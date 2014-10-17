#include "system.h"
#include "string.h"
#include "token.h"

Token initToken() {
	Token t = {
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
	//printf("Token with str : %s\n", t);
	printString(&token->str);
	printf("\n");
}
