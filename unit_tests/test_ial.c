#include "test.h"
#include "../ial.c"
#include "../string.h"

START_TEST_SUITE(IALTest)
	String find = initString("abc");
	String text = initString("ababab");
	TEST_EXPR("Did not find - OK",(FindString(&text, &find) == (int)text.length));
	appendCharToString(&text, 'c');
	appendCharToString(&text, 's');
	TEST_EXPR("Find - OK",(FindString(&text, &find) == 4));
END_TEST_SUITE


