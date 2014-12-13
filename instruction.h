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
		LOCAL = 0,
		GLOBAL,
		CONST,
		UNDEF_
	} VariableType;

	typedef struct {
		uint8_t var_type : 2; // GLOBAL / LOCAL / CONST
		uint8_t data_type: 3; // STRING / DOUBLE / INT / BOOL

		bool initialized : 1;

		union {
			int64_t offset;
			int32_t int_;
			bool bool_;
			double double_;
			String* str;
		};
	} Operand;

	/**
	 * Instruction is three address code
	 *
	 *	DST  -  SRC_1  -  SRC_2
	 *
	 */
	typedef enum {
		// dont change order !! must be same as order of token types
		NEG, //  8 {*,L,G}{*,*,*}{I*,D*}
		NOT, //  4 {*,L,G}{*,*,*}{B*}
		MUL, // 64 {C,L,G}{C,L,G}{II,DI,ID,DD}
		DIV, // 64 {C,L,G}{C,L,G}{II,DI,ID,DD}
		AND, // 16 {C,L,G}{C,L,G}{BB}
		ADD, // 80 {C,L,G}{C,L,G}{II,DI,ID,DD,SS}
		SUB, // 64 {C,L,G}{C,L,G}{II,DI,ID,DD}
		OR , // 16 {C,L,G}{C,L,G}{BB}
		XOR, // 16 {C,L,G}{C,L,G}{BB}
		L  , // 64 {C,L,G}{C,L,G}{II,DD,BB,SS}    ????
		G  , // 64 {C,L,G}{C,L,G}{II,DD,BB,SS}    ????
		LE , // 64 {C,L,G}{C,L,G}{II,DD,BB,SS}    ????
		GE , // 64 {C,L,G}{C,L,G}{II,DD,BB,SS}    ????
		EQ , // 64 {C,L,G}{C,L,G}{II,DD,BB,SS}    ????
		NE , // 64 {C,L,G}{C,L,G}{II,DD,BB,SS}    ????

		READLN, //  6 [LG][SDI]  only DST
		WRITE,//  1 dst.int_ ... arg_count
		MOV,    //  4 [G][SDIB]   only DST
		PUSH,   // 9 C+[LG][SDIB] only SRC
		PUSHX,	// 8 [LG][SDIB] only SRC
		CALL,   //  1 [ADDR], [locals_count]
		CALL_LENGTH,
		CALL_COPY, // completed
		CALL_FIND,
		CALL_SORT,
		RET,    //  1 dst.int_ == <arg_count + 1>
		JMP_F,  //  1 dst.offset == ADDR
		JMP,    //  1 dst.offset == ADDR
		HALT
	} InstructionOp;

	struct instruction;
	typedef struct instruction Instruction;
	typedef void (*InstrFuncPtr)(Instruction*);

	struct instruction {
		InstrFuncPtr instr;
		Operand dst;
		Operand src_1;
		Operand src_2;
	};

	typedef struct instruction Instruction;

	GenVectorPrototypes(Instruction)

#endif
