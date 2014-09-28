#include "test.h"
#include "../string.h"

START_TEST_SUITE(stringTesting)
	String s = initEmptyString();
	TEST_EXPR("Should be OK", s.allocated_size == 8);
	TEST_EXPR("Should be OK", -2)
	TEST_EXPR("Should failed", 0)
END_TEST_SUITE
