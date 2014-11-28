#include "../scanner.h"

int main() {
	Scanner scanner = initScanner();

	//assignFile(&scanner.input, "testFile.txt");
	assignString(&scanner.input, "begin  53e4 false False true end\n");

	TokenVector *tokvect = getTokenVector(&scanner);
	if(getError()) {
		printError();
		return 1;
	}
	// while(true) {
	// 	t = getToken(&scanner);

	// 	if(getError()) {
	// 		printError();
	// 		// In case of incomplete token; must be also free'd
	// 		TokenVectorAppend(tokvect, t);
	// 		break;
	// 	}

	// 	assert(scanner.state != SOS_error);


	// 	tokenInfo(&t);
	// 	printf("-- %s -- \n", stringifyToken(&t));

	// 	if(t.type == TT_empty || scannerFinished(&scanner))
	// 		break;

	// 	TokenVectorAppend(tokvect, t);
	// };
	//

	Token *t;

	for(t = TokenVectorFirst(tokvect); t <= TokenVectorLast(tokvect) ; t++) {
		switch(t->type) {
			case TT_real: {
				printf("-- %f -- \n", t->r);
				break;
			}
			case TT_bool:
			case TT_integer: {
				printf("-- %d -- \n", t->n);
				break;
			}
			default: {
				printf("-- %s -- \n", stringifyToken(t));
			}
		}

		destroyToken(t);
	}

	destroyScanner(&scanner);

	TokenVectorFree(tokvect);
	tokvect = NULL;
}
