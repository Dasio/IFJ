/**
 * created 2.10.2014
 * sybol.h - IFJ
 */

#include "error.h"
#include "string.h"

#ifndef SYMBOL_H
#define SYMBOL_H

#define DEFAULT_HASH_SIZE 16
// Types of symbols
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
	SymbolTable **arg; // array of arguments pointer to symbols in Hash
	uint32_t ArgCount;
	uint32_t ArgMax;

	SymbolTable **LocTable; // Hash of all symbols in this Context
	uint32_t LocSize; // size of HashTable
	uint32_t LocCount; // number of symbols
	uint32_t InstrucIndex; // index of start in Instruction Tape
}Context;

typedef struct
{
	SymbolType type;	// Enum what kind of data are stored
	int index;			// for variable index in stack
						// for function index in instruction tape
	char *name;		// Name of variable/function
	Context *FunCont;	// Pointer to Context of function
} Symbol;

// struct in Hash table with data and pointer to next value
struct SymbolTableStruct
{
	SymbolTable *next;
	Symbol data;
};

// global symbols in context with zero arguments (InitContext(0))

#include "ial.h"
#include "stack.h"

/**
 * Init content for funciton
 * @param  uint32_t number of arguments
 * @return          pointer to context
 *
 */
Context *InitContext(uint32_t);

/**
 * Init content for funciton
 * @param  Context*		pointer to context
 * @param  SymbolType	type of new symbol
 * @param  int			index in stack
 * @param  char*		name of new symbol
 * @param  Context*		pointer to context if SymbolType == T_FunPointer
 * @return          	pointer to new symbol
 *
 */
SymbolTable *AddArgToContext(Context*, SymbolType, int, char*, Context*);
void FreeContext(Context*);

//GenVectorPrototypes(SymbolType);
#endif
