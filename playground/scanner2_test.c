#include "../scanner.h"

int main() {
	Scanner scanner = initScanner();

	assignFile(&scanner.input, "testFile.txt");

	TokenVector *tokvect = getTokenVector(&scanner);
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

	for(t = TokenVectorFirst(tokvect); t < TokenVectorLast(tokvect) ; t++) {
		printf("-- %s -- \n", stringifyToken(t));
	}

}
