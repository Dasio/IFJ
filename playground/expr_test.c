#include "../parser.h"

static Scanner scanner;
Token *token;
Context *mainContext;
Context *funcContext;
Context *activeContext;
TokenVector *tokenVector;

int main()
{
	scanner = initScanner();
	assignFile(&scanner.input, "expr_test_file.txt");
	tokenVector = getTokenVector(&scanner);

	mainContext = InitContext(0);
	activeContext = mainContext;
	token = TokenVectorFirst(tokenVector);

	//printf("%d\n", expr());
	expr();
	//printf("%d\n", expr());
	expr();
	if(!getError()) printf("EXPRESSION OK\n");
	return 0;
}

