#include "system.h"
#include "scanner.h"
#include "parser.h"

int main(int argc, char *argv[]) {
	// Error code initialized to success
	int ecode = 0;

	// Scanner initialization
	Scanner scanner = initScanner();

	if(argc <= 1) {
		setError(ERR_CannotOpenFile);
		goto err;
	}
	assignFile(&scanner.input, argv[1]);

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
