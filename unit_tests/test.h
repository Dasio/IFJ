#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

extern uint8_t testPassed,testFailed;

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

static inline void printResult(const char *name, bool result)
{
	if(result)
	{
		printf(ANSI_COLOR_GREEN "[ OK ] " ANSI_COLOR_RESET);
		testPassed++;
	}
	else
	{
		printf(ANSI_COLOR_RED "[ FAIL ] " ANSI_COLOR_RESET);
		testFailed++;
	}
	printf("%s\n",name);
}

#define ADD_TEST_SUITE(suitName) testSuites[testSuitesCount++] = suitName;
#define START_TEST_SUITE(suitName)	void suitName() { \
	printf(ANSI_COLOR_YELLOW "%s started\n" ANSI_COLOR_RESET ,#suitName);
#define END_TEST_SUITE \
	printf("Passed = %d    Failed = %d\n",testPassed,testFailed);	\
	}
#define TEST_EXPR(name,value) printResult(name,value);

#endif
