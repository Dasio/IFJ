///////////////////////////////////////////////////////////////////////////////////////////////////////////
// ///////////////////////////////////////////////////////////////////////////////////////////////////// //
// // /////////////////////////////////////////////////////////////////////////////////////////////// // //
// // // ///////////////////////////////////////////////////////////////////////////////////////// // // //
// // // // HOW IT WORKS https://www.dropbox.com/s/g3ewuau7l39ple6/IMG_20141127_171357.jpg?dl=0 // // // //
// // // ///////////////////////////////////////////////////////////////////////////////////////// // // //
// // /////////////////////////////////////////////////////////////////////////////////////////////// // //
// ///////////////////////////////////////////////////////////////////////////////////////////////////// //
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "test.h"
#include "../vector.h"
#include "../ial.h"
static STACK stack;
START_TEST_SUITE(STACKtest);
	uint32_t InstPosition = 25; // index in instruction tape where is called function
	StackInit(stack);	// Vector which simulate Stack

	// reserve 3 items for Global symbol values
	ReserveGlobalSymbol(&stack, 4);
	// set 3 Global symbol values
	StackSetValue(&stack, (StackData) {.Sint = 1}, 1);
	StackSetValue(&stack, (StackData) {.Sint = 2}, 2);
	StackSetValue(&stack, (StackData) {.Sint = 3}, 3);
	StackSetValue(&stack, (StackData) {.Sint = 4}, 4);

	// test if 2. Global symbol == 2 as set before
    TEST_EXPR("Test Global value", StackDataVectorAt(stack.Vec, 2)->Sint == 2);


	// necesary to set arguments !!!
	int x=5, y=4; // arguments - int main(int x = 5, int y = 4)
	int LocCount = 5; // represent number of local variable of Context --> Context->LocCount

	// int main(int x, int y), push return value and arguments
	StackDataVectorAppend(stack.Vec, (StackData) {.Sint = 0}); // Return value
	StackDataVectorAppend(stack.Vec, (StackData) {.Sint = y}); // y argument
	StackDataVectorAppend(stack.Vec, (StackData) {.Sint = x}); // x argument
	CallFunction(&stack, LocCount, InstPosition);



	InstPosition = 684; // Code is execude and InstPosition has changed
	// set values of local variable
	for (int i = 1; i <= LocCount; ++i)
	{
		StackSetValue(&stack, (StackData) {.Sint = i*111}, i);
	}

	//    Set return value, index == -1-argCoutn == -3
	StackSetValue(&stack, (StackData) {.Sint = -6}, -3);


// tests
    TEST_EXPR("Position in stack", stack.Position == 9);
    TEST_EXPR("Number of items in stack", stack.Vec->used == 15);
    TEST_EXPR("Local value", StackReadValue(&stack, 3)->Sint == 333); // test local variable with index 3
    TEST_EXPR("Global value", StackDataVectorAt(stack.Vec, 4)->Sint == 4); // test local variable with index 4

    //					  ArgCount	LocCount
    ReturnFunction(&stack,   2    , LocCount, &InstPosition);

    // take return data from stack
    TEST_EXPR("Retrun data", -6 == StackDataVectorPop(stack.Vec)->Sint);

    // test current InstPosition
	// 25. GOTO, 26. new instruction
    TEST_EXPR("Instruction position after return", InstPosition == 25+1);





	StackFree(stack);


END_TEST_SUITE
