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

struct SymbolListStruct;
typedef struct SymbolListStruct SymbolList;

struct SymbolStruct;
typedef struct SymbolStruct Symbol;

typedef struct
{
	Symbol **arg; // array of arguments, points to symbol in Hash
	uint32_t ArgCount;
	uint32_t ArgMax;

	SymbolList **LocTable; // Hash of all symbols in this Context
	uint32_t LocSize; // size of HashTable
	uint32_t LocCount; // number of LOCAL symbols
    // number of symbols in HASH == LocCount + ArgCount
	uint32_t InstrucIndex; // index of start in Instruction Tape
	SymbolType ReturnType; // Type of return value
}Context;

struct SymbolStruct
{
    SymbolType type;    // Enum what kind of data are stored
    int index;          // for variable index in stack
                        // for function NULL
    char *name;     // Name of variable/function
    FuncState stateFunc; /**< 0- initial state 1-declared 2-defined*/
    Context *FunCont;   // Pointer to Context of function
};

// struct in Hash table with data and pointer to next value
struct SymbolListStruct
{
	SymbolList *next;
	Symbol data;
};

typedef struct ArgumentStruct Argument;
struct ArgumentStruct
{
    char* name;
    SymbolType type;
    Argument *next;
};
typedef struct
{
    Argument *head;
    Argument *last;
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

/*
 * Init list for arguments
 */
ArgList * initArgList();
/*
 * Add argument to list
 * @param   list   Pointer to list where will argument be added
 * @param   name   Name of argument
 * @param   type   Type of argument
 * @return  Pointer to created argument
 */
Argument *addArgToList(ArgList *list,char *name,SymbolType type);
/*
 * Deallocate every item in list inlucding ArgList itself
 * @param   list    Pointer to list which will be destroyed
 */
void freeArgList(ArgList *list);
#endif
