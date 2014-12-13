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

#include "system.h"
#include "string.h"

#ifndef ial_H
#define ial_H

#include "symbol.h"
#include "stack.h"

/**
 * Find substring in string (length of string have to be set in String struct)
 * @param  in        Original String
 * @param  substring Substring
 *
 * @return           SUCCESSFUL
 * 	                      index where substring start
 * 	                 FAILED
 * 	                      Length of input String
 * 	                      ERR_Allocation if unable to malloc
 */
int FindString(String *in, String *substring);

/**
 * Make formula for KMP algorithm
 * @param  find String which must include it's length
 * @return      FORMULA, NULL if unable to malloc
 */
int *GetFormula(String *find);

// Use QuickSortRecursive (faster)
/**
 * Get length of arr and call QuickSortRecursive
 * @param arr array to sort
 */
void QuickSort(String *string);

void QuickSortRecursive(char *, uint32_t);

// Return hash depend on char* in range of (uint)length
/**
 * Return hash index in range
 * @param  name  Name of symbol
 * @param  range Range of HashTable
 * @return       index to Hash
 */
unsigned int GetHash(const char* name, unsigned range);

// Free LocTable, use SymbolListFree function
/**
 * Erase LocTable in Context and recursive all Contents stored in Hash table
 * @param Cont Pointer to Context
 */
void ContextLocTableFree(Context* Cont);

// Free SymbolList and included Strin
/**
 * Free SymbolList TODO? String if included?
 * @param symbol pointer to SymbolList
 */
void SymbolListFree(SymbolList* symbol);

/**
 * Find Symbol with specific name
 * @param  Cont Content where to find
 * @param  name Name which we want
 * @return      Pointer to SymbolList, NULL if failed
 */
Symbol *SymbolFind(Context *Cont, char *name);

/**
 * Add symbol to Context
 * @param  FunCont       Context where symbol will be
 * @param  type          Type of symbol
 * @param  name          Name of symbol
 * @param  SymbolContext Pointer to symbol's Context if type is T_FunPointer
 * @param  foundSymbol   If not null, function dont have to call again SymbolFind
 * @param  skipCheck	 If false, function will check if symbol name doesn't collide with function
 * @return               Pointer to Symbol, NULL if failed
 */
Symbol *SymbolAdd(Context *FunCont, SymbolType type, char *name, Context *SymbolContext, Symbol *foundSymbol, bool skipCheck);



#endif
