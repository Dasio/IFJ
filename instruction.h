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
		uint8_t sp_inc : 1;

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
		NEG, // 8  {*,L,G}{*,*,*}{I*,D*}
		NOT, // 4  {*,L,G}{*,*,*}{B*}
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

		READLN, // 8  [LG][SDIB]  len DST
		WRITELN,// 1  src1->int_ pocet argumentov
		COPY,   // 3  [CLG][S] src1->*String
		MOV,    // 4  [G][SDIB]   len DST
		PUSH,   // 12 [CLG][SDIB] len SRC
		CALL,   //
		RET
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
	//typedef void (*InstrFuncPtr)(Instruction*);

	// Pri kazdom priradeni do premennej treba flag empty nastavit

	// Inkrementuje SP o parameter integer, vycisti polozku
	// (popr. len flag empty)
	//SPIncrement

	GenVectorPrototypes(Instruction)

#endif
