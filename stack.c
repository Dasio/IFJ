#include "stack.h"

bool ReserveGlobalSymbol(STACK *stack, int num)
{
 	StackDataVectorPushMore(stack->Vec, num+1);
 	// push number of GlobalSymbols, skip index 0
 	if(getError()!=0) // if error occured during PushMorefunctions
 		return false;
 	stack->Position = 0;
 	return true;
 }

bool CallFunction(STACK *stack, uint32_t LocCount, uint32_t InstrIndexCurr)
{
	StackDataVectorAppend(stack->Vec, (StackData) {.Sint = stack->Position});
	StackDataVectorAppend(stack->Vec, (StackData) {.Sint = InstrIndexCurr});
	StackDataVectorPushMore(stack->Vec, LocCount);
 	if(getError()!=0) // if error occured during PushMorefunctions
 		return false;
 	//skip temporary values on stack and calculate stack position from the end of stack
	stack->Position = stack->Vec->used - LocCount - 1;
	return true;
}

bool ReturnFunction(STACK *stack, uint32_t ArgCount, uint32_t LocCount, uint32_t *InstrIndexCurr)
{
	StackDataVectorPopMore(stack->Vec, LocCount);
	StackData *x = StackDataVectorPop(stack->Vec);
	*InstrIndexCurr = x->Sint +1; // skip call instruction and go to new
	x = StackDataVectorPop(stack->Vec);
	stack->Position = x->Sint;
	StackDataVectorPopMore(stack->Vec, ArgCount);
	// leave return value in the stack
 	if(getError()!=0) // if error occured during vector's functions
 		return false;
	return true;
}

void StackSetValue(STACK *stack, StackData data, int index)
{
	assert(stack->Vec->used > stack->Position + index); // index longer than Vector
	assert(index); // index == 0 is invalid
	assert(stack->Position + index > 0); // if index is negativ(argument)
	if(index<0) // if index point to argument, skip one value
		index--;
	StackDataVectorAtSet(stack->Vec, stack->Position+index, data);
}

StackData *StackReadValue(STACK *stack, int index)
{
	assert(stack->Vec->used > stack->Position + index); // index longer than Vector
	assert(index); // index==0 is invalid
	assert(stack->Position + index > 1); // if index is negativ(argument)
	if(index<0)
		index--;
	return StackDataVectorAt(stack->Vec, stack->Position+index);
}

GenVectorFunctions(StackData)
