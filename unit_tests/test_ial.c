#include "test.h"
#include "../ial.c"
#include "../string.h"

START_TEST_SUITE(IALTest)
	String find = initString("abc");
	String text = initString("ababab");
	TEST_EXPR("FindString: \"abc\" is NOT in \"ababab\"",(FindString(&text, &find) == (int)text.length));
	appendCharToString(&text, 'c');
	appendCharToString(&text, 's');
	TEST_EXPR("FindString: \"abc\" IS in \"abababcs\" at index 4",(FindString(&text, &find) == 4));

	char test[56] = "bshoensajgfryfgvjyutkopoiuqwerzxcvmnbvasdfglkjhfnjvzklz";
	QuickSort(test);
	TEST_EXPR("QuickSort (Recursive): true order", strcmp(test, "aabbcdeeffffggghhijjjjkkkllmnnnooopqrrssstuuvvvvwxyyzzz") == 0);


	strcpy(test, "bshoensajgfryfgvjyutkopoiuqwerzxcvmnbvasdfglkjhfnjvzklz");
	QuickSortNonRecursive(test);
	TEST_EXPR("QuickSortNonRecursive: true order", strcmp(test, "aabbcdeeffffggghhijjjjkkkllmnnnooopqrrssstuuvvvvwxyyzzz") == 0);
END_TEST_SUITE


