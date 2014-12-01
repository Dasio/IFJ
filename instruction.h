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
		BOOL = T_bool,
		UNDEF = T_Undefined
	} DataType;

	typedef enum {
		LOCAL,
		GLOBAL
	} VariableType;

	typedef enum {
		CONST,
		VAR
	} Constness;

	typedef struct {
		bool initialized : 1;
		bool sp_inc : 1;
		DataType data_type : 3; // STRING / DOUBLE / INT / BOOL
		VariableType var_type : 1; // GLOBAL / LOCAL
		Constness constness : 1; // CONST / VAR

		union {
			int64_t offset;
			int32_t int_;
			double double_;
			String* str;
		};
	} Operand;

	//typedef Operand StackData;

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


	// Pri kazdom priradeni do premennej treba flag empty nastavit

	// Inkrementuje SP o parameter integer, vycisti polozku
	// (popr. len flag empty)
	//SPIncrement

	GenVectorPrototypes(Instruction)

#endif
