#include "../scanner.h"
#include "../vector.h"

int main()
{
	Scanner scanner = initScanner();

	assignString(&scanner.input, "ahoj_svet : := 00000123\n");

	Token t;
	TokenVector *tokvect = initTokenVector(0);
	while(true) {
		t = getToken(&scanner);

		if(t.type == TT_empty || scannerFinished(&scanner))
			break;

		TokenVectorAppend(tokvect, t);

		tokenInfo(&t);
	};

	destroyToken(&t);
	destroyScanner(&scanner);
	//printf("File closed\n");
	return 0;
}
