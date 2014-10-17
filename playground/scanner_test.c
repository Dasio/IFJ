#include "../scanner.h"

extern FILE *sourceFile;

int main()
{
	Scanner scanner = initScanner();

	assignString(&scanner.input, "ahoj_svet := ako sa mas");

	Token t = getToken(&scanner);

	destroyToken(&t);
	destroyScanner(&scanner);
	//printf("File closed\n");
	return 0;
}
