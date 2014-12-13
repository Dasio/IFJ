/*
 * Project name:
 * Implementace interpretu imperativního jazyka IFJ14
 *
 * Repository:
 * https://github.com/Dasio/IFJ
 *
 * Team:
 * Dávid Mikuš			(xmikus15)
 * Peter Hostačný		(xhosta03)
 * Tomáš Kello			(xkello00)
 * Adam Lučanský		(xlucan01)
 * Michaela Lukášová		(xlukas09)
 */

/**
 * Interpreter module, containing instruction tape.
 */

#include "system.h"
#include "instruction.h"
#include "instructions_generated.h"
#include "instructions_regular.h"
#include "vector.h"
#include "stack.h"

#ifndef _INTERPRETER_H
#define _INTERPRETER_H
	/**
	 * Initializes instruction tape in module
	 */
	void initInterpret();

	/**
	 * Appends instruction to end of instruction tape.
	 * @param op Op code of instruction (see instruction.h)
	 * @param a  Operand A (Destination A)
	 * @param b  Operand B (Source B)
	 * @param c  Operand C (Source C)
	 */
	void generateExprInstruction(InstructionOp op, Operand* a, Operand* b, Operand* c);

	/**
	 * Appends instruction to end of instruction tape.
	 * @param op Op code of instruction (see instruction.h)
	 * @param a  Operand A (Destination A)
	 * @param b  Operand B (Source B)
	 */
	void generateInstruction(InstructionOp op, Operand* a, Operand* b, Operand* c);

	/**
	 * Prints content of tape to stderr.
	 */
	void dumpTape();

	void runInterpretation();

#endif
