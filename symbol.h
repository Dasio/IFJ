/**
 * created 2.10.2014
 * sybol.h - IFJ
 */

#include "error.h"
#include "string.h"

#ifndef SYMBOL_H
#define SYMBOL_H

#define DEFAULT_HASH_SIZE 16
#define DEFAULT_ARG_NUM 4

// Types of symbols
typedef enum {
    T_Undefined = 0,
    T_int,
    T_double,
    T_String,
    T_bool,
    T_FunPointer
} SymbolType;
typedef enum
{
    FS_Undefined = 0, /**< Function is just added to GST */
    FS_Declared, /**< Function is declared */
    FS_Defined /**< Function is defined */
} FuncState;
struct SymbolTableStruct;
typedef struct SymbolTableStruct SymbolTable;

typedef struct
{
	SymbolTable **arg; // array of arguments, points to symbol in Hash
	uint32_t ArgCount;
	uint32_t ArgMax;

	SymbolTable **LocTable; // Hash of all symbols in this Context
	uint32_t LocSize; // size of HashTable
	uint32_t LocCount; // number of symbols
	uint32_t InstrucIndex; // index of start in Instruction Tape
	SymbolType ReturnType; // Type of return value
}Context;

typedef struct
{
    SymbolType type;	// Enum what kind of data are stored
    int index;			// for variable index in stack
                        // for function NULL
    char *name;		// Name of variable/function
    FuncState stateFunc; /**< 0- initial state 1-declared 2-defined*/
    Context *FunCont;	// Pointer to Context of function
} Symbol;

// struct in Hash table with data and pointer to next value
struct SymbolTableStruct
{
	SymbolTable *next;
	Symbol data;
};

#include "ial.h"
#include "stack.h"

/**
 * Init content for funciton
 * @param  uint32_t number of arguments
 * @return          pointer to context
 *
 */
Context *InitContext();

/**
 * Init content for funciton
 * @param  Context*		pointer to context
 * @param  SymbolType	type of new symbol
 * @param  char*		name of new symbol
 * @param  Context*		pointer to context if SymbolType == T_FunPointer
 * @return SymbolTable*	pointer to new symbol
 *
 */
SymbolTable *AddArgToContext(Context*, SymbolType, char*, Context*);


void FreeContext(Context*);

#endif
