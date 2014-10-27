#include "../scanner.h"
#include "../vector.h"

int main()
{
	Scanner scanner = initScanner();

	//assignString(&scanner.input, "ahoj_svet : := 00000123\n");
	assignFile(&scanner.input, "testFile.txt");

	Token t;
	TokenVector *tokvect = initTokenVector(0);
	while(true) {
		t = getToken(&scanner);

		if(getError()) {
			printError();
			// In case of incomplete token; must be also free'd
			TokenVectorAppend(tokvect, t);
			break;
		}

		tokenInfo(&t);
		if(t.type == TT_empty || scannerFinished(&scanner))
			break;

		TokenVectorAppend(tokvect, t);
	};

	destroyScanner(&scanner);

	// TODO: Destroy TokenVector

	return 0;
}
