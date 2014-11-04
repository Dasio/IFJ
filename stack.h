#include "system.h"
#include "error.h"

#ifndef _STACK_H
#define _STACK_H

#define NUMBER_OF_CONTEXT_INFO 2 // pointer to stact and instruction tape
#define DEFAULT_STACK_SIZE 64
#define StackInit(stack)			\
			STACK stack;			\
			stack.Position = 0;		\
			stack.Vec = StackDataInitVector(DEFAULT_STACK_SIZE)
#define StackFree(stack) StackDataVectorFree(stack.Vec)

	// stack structure

	typedef union
	{
		int16_t Sint16;
		uint32_t Suint16;
		int32_t Sint32;
		uint32_t Suint32; //used for return instruction and stack index
		int64_t Sint64;
		uint64_t Suint64;
		long Slong;
		double Sdouble;
		float Sfloat;
		char  *Schar;
	} StackData;

	typedef struct Vector StackDataVector;

#include "symbol.h"
#include "vector.h"

	typedef struct
	{
		uint32_t Position;
		StackDataVector *Vec;
	} STACK;


// Context = main Function
// Reserve space in STACK but don't fill argument values!!!
bool LoadFirstFunc(STACK*, Context*);

// param: main Stack, number of local arguments, index in inst tape
bool CallFunction(STACK*, uint32_t var, uint32_t inst);

// param: number of argument, local variables,
// pointer to index in inst tape and return StackData value
bool ReturnFunction(STACK*, uint32_t arg, uint32_t var, uint32_t* inst, StackData data);

// StackData to write, int index - negativ represents argument
void StackSetValue(STACK*, StackData data, int index);
// return StackData on specify index
StackData *StackReadValue(STACK*, int index);

#endif
