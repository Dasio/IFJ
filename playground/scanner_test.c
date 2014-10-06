#include "../scanner.h"

extern FILE *sourceFile;

int main(int argc, char **argv)
{
	const char *filename = argv[1];
	if (!OpenFile(filename))
		return 1; //Cannot open sourceFile

	Token newToken;
	EmptyToken(&newToken);

	if (ParseToTokens(&newToken))
		printf("\nComleted\n");

	if (!CloseFile(sourceFile))
		return 1;
	//printf("File closed\n");
	return 0;
}
