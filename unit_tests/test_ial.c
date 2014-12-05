#include "test.h"
#include "../ial.c"
#include "../string.h"

START_TEST_SUITE(IALTest)
	String find = initString("abc");
	String text = initString("ababab");
	TEST_EXPR("FindString: \"abc\" is NOT in \"ababab\"",(FindString(&text, &find) == 0));
	appendCharToString(&text, 'c');
	appendCharToString(&text, 's');
	TEST_EXPR("FindString: \"abc\" IS in \"abababcs\" at index 5 (indexing from 1)",(FindString(&text, &find) == 5));

	char test[56] = "bshoensajgfryfgvjyutkopoiuqwerzxcvmnbvasdfglkjhfnjvzklz";
	QuickSort(test);
	TEST_EXPR("QuickSort (Recursive): true order", strcmp(test, "aabbcdeeffffggghhijjjjkkkllmnnnooopqrrssstuuvvvvwxyyzzz") == 0);

END_TEST_SUITE


