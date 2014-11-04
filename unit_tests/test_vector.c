#include "test.h"
#include "../vector.c"

START_TEST_SUITE(VECTORtest)
    intVector *Vec = intInitVector(1);
    intVectorAppend(Vec, 1);
    intVectorAppend(Vec, 2);
    intVectorPushMore(Vec, 2);
    intVectorAppend(Vec, 3);
    intVectorAppend(Vec, 4);
    intVectorAppend(Vec, 5);


    int *x = intVectorAt(Vec, 4);
    TEST_EXPR("intVectorAt", *x==3);
    TEST_EXPR("intVectorAtValue", intVectorAtValue(Vec, 1) == 2);
	TEST_EXPR("intVectorPopValue", intVectorPopValue(Vec) == 5);
    intVectorPopMore(Vec, 2);
    x = intVectorPop(Vec);
	TEST_EXPR("intVectorPop", *x==0);

	TEST_EXPR("intVectorFirst", intVectorFirstValue(Vec)==1);

    intVectorFree(Vec);

END_TEST_SUITE
