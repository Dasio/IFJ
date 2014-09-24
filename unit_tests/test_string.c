#include "test.h"
#include "../string.h"

START_TEST_SUITE(stringTesting)
TEST_EXPR("Should be OK",1)
TEST_EXPR("Should be OK",-2)
TEST_EXPR("Should failed",0)
END_TEST_SUITE