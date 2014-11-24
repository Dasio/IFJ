#include "test.h"
#include "../vector.h"
#include "../ial.h"
static STACK stack;
START_TEST_SUITE(STACKtest);
	uint32_t InstPosition = 25; // index in instruction tape where is called function
	StackInit(stack);	// Vector which simulate Stack


	LoadGlobalSymbol(&stack, 3);

	StackSetValue(&stack, (StackData) {.Sint = 1}, 1);
	StackSetValue(&stack, (StackData) {.Sint = 2}, 2);
	StackSetValue(&stack, (StackData) {.Sint = 3}, 3);

    TEST_EXPR("Test Global value", StackDataVectorAt(stack.Vec, 2)->Sint == 2);


	// necesary to set arguments !!!
	//printf("loc %d, arg %d, argMax %d total %d\n", GlobalSymbol->LocCount, GlobalSymbol->ArgCount, GlobalSymbol->ArgMax, stack.Vec->used);
	int x=5, y=4;
	int LocCount = 8; // represent number of local variable of Context --> Context->LocCount
	// int main(int x, int y), push arguments from back, in program x = arg[0], y = arg[1]...
	StackDataVectorAppend(stack.Vec, (StackData) {.Sint = y});
	StackDataVectorAppend(stack.Vec, (StackData) {.Sint = x});
	CallFunction(&stack, LocCount, InstPosition);
	for (int i = 1; i <= LocCount; ++i)
	{
		StackSetValue(&stack, (StackData) {.Sint = i*111}, i);
	}

	/* FindSymbol of function in GlobalTable of symbols and get instruction index */
	InstPosition = 684; // there start new Function, set from GOTO 684

    TEST_EXPR("Position in stack", stack.Position == 7);
    TEST_EXPR("Number of items in stack", stack.Vec->used == 16);
    TEST_EXPR("Local value", StackReadValue(&stack, 3)->Sint == 333);
    ReturnFunction(&stack, 2, LocCount, &InstPosition, (StackData) {.Sint = 5});



    TEST_EXPR("Retrun data", 5 == StackDataVectorPop(stack.Vec)->Sint);


	// 25. instruction is callFunction, 26. GOTO, 27. new instruction
    TEST_EXPR("Instruction position after return", InstPosition == 25+2);


    TEST_EXPR("Argument value", StackReadValue(&stack, 2)->Sint == 2);


	StackFree(stack);


END_TEST_SUITE
