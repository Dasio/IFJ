/**
 * created 2.10.2014
 * sybol.h - IFJ
 */

#include "error.h"
#include "string.h"

#ifndef SYMBOL_H
#define SYMBOL_H

#define DEFAULT_HASH_SIZE 16
// all about local variables
typedef enum {
    T_Undefined = 0,
    T_int,
    T_double,
    T_String,
    T_bool,
    T_FunPointer
} SymbolType;

struct SymbolTableStruct;
typedef struct SymbolTableStruct SymbolTable;

typedef struct
{
	SymbolTable **arg;
	uint32_t ArgCount;
	uint32_t ArgMax;

	SymbolTable **LocTable;
	uint32_t LocSize; // size of HashTable
	uint32_t LocCount;
	uint32_t InstrucIndex;
}Context;

typedef struct
{
	SymbolType type;	// Enum what kind of data are stored
	int index;			// for variable index in stack
						// for function index in instruction tape
	char *name;		// Name of variable/function
	Context *FunCont;	// Pointer to Context of function
} Symbol;

struct SymbolTableStruct
{
	SymbolTable *next;
	Symbol data;
};

// end local variables

// global symbols in hash structure
// htab_t *GlobalSymbols[];......................................................................
// hash structures

#include "ial.h"
#include "stack.h"

//symbol.h
Context *InitContext(uint32_t);
SymbolTable *AddArgToContext(Context*, SymbolType, int, char*, Context*);
void FreeContext(Context*);

//GenVectorPrototypes(SymbolType);
#endif
