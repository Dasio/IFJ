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
		GLOBAL,
		CONST,
		UNDEF_
	} VariableType;

	typedef struct {
		bool initialized : 1;
		bool sp_inc : 1;
		DataType data_type : 3; // STRING / DOUBLE / INT / BOOL
		VariableType var_type : 2; // GLOBAL / LOCAL / CONST

		union {
			int64_t offset;
			int32_t int_;
			bool bool_;
			double double_;
			String* str;
		};
	} Operand;

	//typedef Operand StackData;

	/**
	 * Instruction is three address code
	 *
	 *	DST  -  SRC_1  -  SRC_2
	 *
	 */
	typedef enum {
		NEG, // 8  {L,G}{L,G}{I,D}
		NOT, // 4  {L,G}{L,G}{B}
		MUL, // 72 {L,G}{C,L,G}{C,L,G}{II,DI,ID,II}
		DIV, // 72 {L,G}{C,L,G}{C,L,G}{II,DI,ID,II}
		AND, // 18 {L,G}{C,L,G}{C,L,G}{BB}
		ADD, // 90 {L,G}{C,L,G}{C,L,G}{II,DI,ID,II,SS}
		SUB, // 72 {L,G}{C,L,G}{C,L,G}{II,DI,ID,II}
		OR , // 18 {L,G}{C,L,G}{C,L,G}{BB}
		XOR, // 18 {L,G}{C,L,G}{C,L,G}{BB}
		L  , // 72 {L,G}{C,L,G}{C,L,G}{II,DD,BB,SS}     ????
		G  , // 72 {L,G}{C,L,G}{C,L,G}{II,DD,BB,SS}     ????
		LE , // 72 {L,G}{C,L,G}{C,L,G}{II,DD,BB,SS}     ????
		GE , // 72 {L,G}{C,L,G}{C,L,G}{II,DD,BB,SS}     ????
		EQ , // 72 {L,G}{C,L,G}{C,L,G}{II,DD,BB,SS}     ????
		NE   // 72 {L,G}{C,L,G}{C,L,G}{II,DD,BB,SS}     ????
	} InstructionOp;

	typedef struct {
		InstructionOp opcode;
		Operand src_1;
		Operand src_2;
		Operand dst;
	} Instruction;

	typedef void (*instrFunc)(Operand*, Operand*, Operand*);

	// Pri kazdom priradeni do premennej treba flag empty nastavit

	// Inkrementuje SP o parameter integer, vycisti polozku
	// (popr. len flag empty)
	//SPIncrement

	GenVectorPrototypes(Instruction)

#endif
