/**
 * Interpreter module, containing instruction tape.
 */

#include "system.h"
#include "instruction.h"
#include "vector.h"
#include "stack.h"

#ifndef _INTERPRET_H
#define _INTERPRET_H
	/**
	 * Initializes instruction tape in module
	 */
	void initInterpret();

	/**
	 * Appends instruction to end of instruction tape.
	 * @param op Op code of instruction (see instruction.h)
	 * @param a  Operand A (Source A)
	 * @param b  Operand B (Source B)
	 * @param c  Operand C (Destination C)
	 */
	void appendInstruction(InstructionOp op, Operand a, Operand b, Operand c);

	void setStartingPosition(uint32_t position);

	void runInterpretation();

#endif
