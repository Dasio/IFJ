/**
 * created 2.10.2014
 * sybol.h - IFJ
 */

#include "error.h"
#include "string.h"
#include "vector.h"

#ifndef SYMBOL_H
#define SYMBOL_H

#define DEFAULT_HASH_SIZE 16
#define DEFAULT_ARG_NUM 4

// Types of symbols
typedef enum {
	T_String,
	T_double,
	T_int,
	T_bool,
	T_FunPointer,
	T_Undefined
} SymbolType;
typedef enum
{
	FS_Undefined = 0, /**< Function is just added to GST */
	FS_Declared, /**< Function is declared */
	FS_Defined /**< Function is defined */
} FuncState;

struct SymbolListStruct;
typedef struct SymbolListStruct SymbolList;

struct SymbolStruct;
typedef struct SymbolStruct Symbol;

typedef struct
{
	Symbol **arg; /**< array of arguments, points to symbol in Hash */
	uint32_t argCount;
	uint32_t argMax;

	SymbolList **locTable; /**< Hash of all symbols in this Context */
	uint32_t locSize; /**< size of HashTable */
	uint32_t locCount; /**< number of LOCAL symbols
						 number of symbols in HASH == LocCount + ArgCount */
	uint32_t instrucIndex; /**< index of start in Instruction Tape */
	SymbolType returnType; /**< Type of return value */
}Context;

struct SymbolStruct
{
	SymbolType type;    /**< Enum what kind of data are stored */
	int index;          /**< for variable index in stack
						 for function NULL */
	char *name;     /**< Name of variable/function */
	FuncState stateFunc; /**< 0- initial state 1-declared 2-defined */
	Context *funCont;   /**< Pointer to Context of function */
    intVector *adressVector; /**< for adding addresses to instruction tape if function */
};

// struct in Hash table with data and pointer to next value
struct SymbolListStruct
{
	SymbolList *next;
	Symbol data;
}; // SymbolList

typedef struct ArgumentStruct Argument;
struct ArgumentStruct
{
	char* name; /**< Name of symbol(argument) */
	SymbolType type; /**< Type of argument */
	Argument *next; /**< Pointer to next argument */
};
typedef struct
{
	uint32_t argCount; /**< How many arguments are stored in list */
	Argument *head; /**< Pointer to first item in list */
	Argument *last; /**< Pointer to last item in list */
}ArgList;

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
 * @return SymbolList*	pointer to new symbol
 *
 */
Symbol *AddArgToContext(Context*, SymbolType, char*, Context*);


void FreeContext(Context*);

#endif
