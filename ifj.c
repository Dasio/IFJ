#include "system.h"
#include "scanner.h"
#include "parser.h"
#include "interpreter.h"
#include "memory_mgmt.h"

extern bool scanner_initialized;
extern bool token_vector_initialized;
extern TokenVector *tokenVectorMain;
extern Scanner scannerMain;

int main(int argc, char *argv[]) {
	// Error code initialized to success
	int ecode = 0;
	bool scanner_initialized = false;
	bool token_vector_initialized = false;

	if(argc <= 1) {
		setError(ERR_CannotOpenFile);
		goto err;
	}

	// Scanner initialization
	scannerMain = initScanner();
	scanner_initialized = true;

	assignFile(&scannerMain.input, argv[1]);

	if(getError())
		goto err;

	// Scanner
	tokenVectorMain = getTokenVector(&scannerMain);
	token_vector_initialized = true;

	if(getError())
		goto err;

	initInterpret();

	// Recursive descent
	parse(tokenVectorMain);

	if(getError())
		goto err;

	// Interpretation
	dumpTape();
	runInterpretation();

	// Error handling
err:
	if(getError()) {
		printError();
		ecode = getReturnError();
	}

	// Cleanup done in HALT instruction
	// if(token_vector_initialized)
	// 	destroyTokenVector(tokenVectorMain);
	// if(scanner_initialized)
	// 	destroyScanner(&scannerMain);

	//implodeMemory();

	return ecode;
}
