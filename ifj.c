#include "system.h"
#include "scanner.h"
#include "parser.h"
#include "interpreter.h"
#include "memory_mgmt.h"

#include "initializer.h"

extern TokenVector *tokenVectorMain;
extern Scanner scannerMain; // Defined in instructions_regular.c

int main(int argc, char *argv[]) {
	// Missing parameter
	if(argc <= 1) {
		setError(ERR_CannotOpenFile);
		die();
	}

	// Scanner initialization
	scannerMain = initScanner();
	initialized_items.scanner = true;

	assignFile(&scannerMain.input, argv[1]);

	if(getError())
		die();

	// Scanner
	tokenVectorMain = getTokenVector(&scannerMain);
	initialized_items.tokens = true;

	if(getError())
		die();

	initInterpret();

	// Recursive descent
	parse(tokenVectorMain);

	if(getError()) {
		die();
	}

	// Interpretation
	runInterpretation();

	// Unreachable statement
	return 0;
}
