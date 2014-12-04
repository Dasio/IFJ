#include "../parser.h"
int main()
{
	// Scanner initialization
	Scanner scanner = initScanner();
	assignFile(&scanner.input, "testFile2.txt");
	TokenVector *tokenVector = NULL;

	if(getError()) {
		printError();
		goto cleanup;
	}

	// Scanner
	tokenVector = getTokenVector(&scanner);

	if(getError()) {
		printError();
		goto cleanup;
	}

	parse(tokenVector);
	if(!getError()) printf("Parsing OK\n");
		else printError();

cleanup:
	// Cleanup
	if(tokenVector)
		destroyTokenVector(tokenVector);
	destroyScanner(&scanner);

	return 0;
}

