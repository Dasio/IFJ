#include "system.h"
#include "scanner.h"
#include "parser.h"

int main() {
	// Error code initialized to success
	int ecode = 0;

	// Scanner initialization
	Scanner scanner = initScanner();
	assignFile(&scanner.input, "playground/testFile2.txt");

	if(getError())
		goto err;

	// Scanner
	TokenVector *tokenVector = getTokenVector(&scanner);

	if(getError())
		goto err;

	// Recursive descent
	parse(tokenVector);

	if(getError())
		goto err;

	// Cleanup
	destroyTokenVector(tokenVector);
	destroyScanner(&scanner);

	// Error handling
err:

	if(getError()) {
		printError();
		ecode = getReturnError();
	}

	return ecode;
}
