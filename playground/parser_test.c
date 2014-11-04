#include "../parser.h"
int main()
{
	parse();
	if(getError())
		printError();
	else printf("Parsing OK\n");
	return 0;
}

