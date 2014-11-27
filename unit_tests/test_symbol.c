#include "test.h"
#include "../symbol.h"
#include "../ial.h"

START_TEST_SUITE(SYMBOLtest)
	Context *Cont1 = InitContext();
	AddArgToContext(Cont1, T_int, "variable", NULL);
	AddArgToContext(Cont1, T_int, "variable2", NULL);
	TEST_EXPR("Number of ARGument", Cont1->ArgCount == 2);
	TEST_EXPR("Name of ARGument", !strcmp(Cont1->arg[1]->name, "variable2"));
	TEST_EXPR("Find symbol", SymbolFind(Cont1, "variable"));

	FreeContext(Cont1);

END_TEST_SUITE
