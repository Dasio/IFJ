/**
 * Definition of instruction
 */

#include "string.h"

#ifndef _INSTRUCTION_H
#define _INSTRUCTION_H

	typedef union {
		int32_t n;
		double d;
		String* str;
	} Operand;

	/**
	 * Instruction is three address code
	 *
	 *	SRC_1  -  SRC_2  -  DST
	 *
	 */
	typedef enum {
		/**
		 * Copies data from Src to Dst
		 * Src ___ Dst
		 */
		INST_Mov,

		/**
		 * Add's operands from src_1
		 * Src1
		 */
		INST_AddI,
		INST_AddD,
		INST_AddS,

		INST_SubI,
		INST_SubD,

		INST_MulI,
		INST_MulD,

		INST_SortS,

		INST_Jmp,
		INST_JmpEq,
		INST_JmpZ,

		INST_Sub
	} InstructionOp;

	typedef struct {
		InstructionOp opcode;
		Operand src_1;
		Operand src_2;
		Operand dst;
	} Instruction;

#endif
