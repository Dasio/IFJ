#include "test.h"
#include "../vector.h"
#include "../ial.h"

START_TEST_SUITE(STACKtest);
	uint32_t InstPosition = 25; // index in instruction tape where is called function
	StackInit(stack);	// Vector which simulate Stack


/* prepre main contexts, struct Context is tested in test_symbol*/
	Context *Cont1 = InitContext(3);
	AddArgToContext(Cont1, T_int, -1, "arg11", NULL);
	AddArgToContext(Cont1, T_int, -2, "arg12", NULL);
	AddArgToContext(Cont1, T_int, -3, "arg13", NULL);
	SymbolAdd(Cont1, T_int, 1, "loc11", NULL);
	SymbolAdd(Cont1, T_int, 2, "loc12", NULL);
	SymbolAdd(Cont1, T_int, 3, "loc13", NULL);
/* end of context preparation */



	LoadFirstFunc(&stack, Cont1);
	StackSetValue(&stack, (StackData) {.Suint32 = 11}, -1);
	StackSetValue(&stack, (StackData) {.Suint32 = 22}, -2);
	StackSetValue(&stack, (StackData) {.Suint32 = 33}, -3);
	// necesary to set arguments !!!
	//printf("loc %d, arg %d, argMax %d total %d\n", Cont1->LocCount, Cont1->ArgCount, Cont1->ArgMax, stack.Vec->used);
	int x=5, y=4;
	int LocCount = 8; // represent number of local variable of Context --> Context->LocCount
	// int main(int x, int y), push arguments from back, in program x = arg[0], y = arg[1]...
	StackDataVectorAppend(stack.Vec, (StackData) {.Suint32 = y});
	StackDataVectorAppend(stack.Vec, (StackData) {.Suint32 = x});
	CallFunction(&stack, LocCount, InstPosition);
	for (int i = 1; i <= LocCount; ++i)
	{
		StackSetValue(&stack, (StackData) {.Suint32 = i*111}, i);
	}
	/* FindSymbol of function in GlobalTable of symbols and get instruction index */
	InstPosition = 684; // there start new Function, set from GOTO 684

    TEST_EXPR("Position in stack", stack.Position == 11);
    TEST_EXPR("Number of items in stack", stack.Vec->used == 20);
    TEST_EXPR("Local value", StackReadValue(&stack, 3)->Suint32 == 333);
    ReturnFunction(&stack, 2, LocCount, &InstPosition, (StackData) {.Suint32 = 5});



    TEST_EXPR("Retrun data", 5 == StackDataVectorPop(stack.Vec)->Suint32);


	// 25. instruction is callFunction, 26. GOTO, 27. new instruction
    TEST_EXPR("Instruction position after return", InstPosition == 25+2);


    TEST_EXPR("Argument value", StackReadValue(&stack, -2)->Suint32 == 22);


	StackFree(stack);
	FreeContext(Cont1);


END_TEST_SUITE
