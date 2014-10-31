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
	//printf("Token with str : %s\n", t);
	switch(token->type) {
		case TT_identifier: {
			printf("Token str : ");
			printString(&token->str);
			break;
		}
		case TT_keyword: {
			printf("Keyword %d", token->keywordToken);
			break;
		}
		default: break;
	}
	printf(" , type : %d\n", token->type);
}
