/*
 * Project name:
 * Implementace interpretu imperativního jazyka IFJ14
 *
 * Repository:
 * https://github.com/Dasio/IFJ
 *
 * Team:
 * Dávid Mikúš			(xmikus15)
 * Peter Hostačný		(xhosta03)
 * Tomáš Kello			(xkello00)
 * Adam Lučanský		(xlucan01)
 * Michaela Lukášova	(xlukas09)
 */

#include "system.h"
#include "error.h"
#include "string.h"
#include "vector.h"
#include "instruction.h"

#ifndef _STACK_H
#define _STACK_H

#define DEFAULT_STACK_SIZE 32768

	typedef Operand StackData;

	/**
	 * Vector generation of StackData
	 */
	GenVectorPrototypes(StackData)

	typedef struct
	{
		int64_t BP;
		StackDataVector *vect;
	} Stack;

	/**
	 * Dumps content of stack, including vector
	 */
	void dumpStack();

/**
 * prepare it for global symbols
 * @param  stack stack
 * @param  num   number of Global symbols
 * @return       true if all OK
 */
//bool ReserveGlobalSymbol(STACK *stack, int num);

/**
 * Prepare stack for new function
 * @param  stack pointer to stack
 * @param  var   number of local arguments
 * @param  inst  current index in instruction tape
 * @return       true if all OK
 */
//bool CallFunction(STACK *stack, uint32_t var, uint32_t inst);

// param: number of argument, local variables,
// pointer to index in inst tape and return StackData value
/**
 * Return from the function
 * @param  stack pointer to stack
 * @param  arg   Number of arguments in function
 * @param  var   Number of local variables in function
 * @param  inst  pointer to Inst index to change it to old function index +1 -- skip call instruction
 * @param  data  Return data
 * @return       true if all OK
 */
//bool ReturnFunction(STACK *stack, uint32_t arg, uint32_t var, uint32_t* inst);

// StackData to write, int index - negativ represents argument
/**
 * Set value in stack (doesn't control range)
 * @param stack pointer to stack
 * @param data  new data
 * @param index index where variable is(negativ-arg, positive-locVar)
 */
//void StackSetValue(STACK *stack, StackData data, int index);

/**
 * Read value from stack
 * @param  stack pointer to stack
 * @param  index index where variable is(negativ-arg, positive-locVar)
 * @return       value of variable
 */
//StackData *StackReadValue(Stack *stack, int index);

#endif
