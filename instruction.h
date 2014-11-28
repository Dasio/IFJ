/**
 * Definition of instruction
 */

#include "system.h"
#include "string.h"
#include "symbol.h"
#include "vector.h"

#ifndef _INSTRUCTION_H
#define _INSTRUCTION_H

	// Data types
	typedef enum {
		STRING = T_String,
		DOUBLE = T_double,
		INT = T_int,
		BOOL = T_bool
	} DataType;

	typedef struct {
		bool empty : 1;
		bool sp_inc : 1;
		DataType data_type : 2;
		VariableType var_type : 1; // global/local

		// var/const

		union {
			int32_t n;
			double d;
			String* str;
		};
	} Operand;

	/**
	 * Instruction is three address code
	 *
	 *	SRC_1  -  SRC_2  -  DST
	 *
	 */
	typedef enum {
		INST_Pop,
		INST_Push,
		INST_Call,

		INST_SPIncrement,
		INST_SPDecrement,

		INST_Halt
	} InstructionOp;

	typedef struct {
		InstructionOp opcode;
		Operand src_1;
		Operand src_2;
		Operand dst;
	} Instruction;

	GenVectorPrototypes(Instruction)

#endif
