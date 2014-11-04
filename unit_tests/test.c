#include "test.h"

void (*testSuites[64])();
uint8_t testSuitesCount=0;
uint8_t testPassed = 0, testFailed = 0;
extern void stringTesting();
extern void IALTest();
extern void SYMBOLtest();
extern void VECTORtest();
extern void STACKtest();

int main()
{
	ADD_TEST_SUITE(stringTesting);
	ADD_TEST_SUITE(IALTest);
	ADD_TEST_SUITE(SYMBOLtest);
	ADD_TEST_SUITE(VECTORtest);
	ADD_TEST_SUITE(STACKtest);

	printf("Starting %d test suites \n",testSuitesCount);
	for(uint8_t i=0;i<testSuitesCount;i++)
	{
		testSuites[i]();
		testPassed=testFailed=0;
	}
	return 0;
}
