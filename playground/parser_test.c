#include "../parser.h"
int main()
{
	parse();
	if(!getError()) printf("Parsing OK\n");
	return 0;
}

