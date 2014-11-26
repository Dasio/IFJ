// file for IAL 21.11.2014
// function: FindString (find substring in string and return index) xkello00
// 					used: Knuth-Moris-Prattuv algorithm
// function: QuickSort make ordered array of chars
// 					used: QuickSort algorithm

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
 */
int FindString(String *in, String *substring);

/**
 * Make formula for KMP algorithm
 * @param  find String which must include it's length
 * @return      FORMULA
 */
int *GetFormula(String *find);

// Use QuickSortRecursive (faster)
/**
 * Get length of arr and call QuickSortRecursive
 * @param arr array to sort
 */
void QuickSort(char arr[]);

void QuickSortNonRecursive(char []);
void QuickSortRecursive(char *, int);

// Return hash depend on char* in range of (uint)length
/**
 * Return hash index in range
 * @param  name  Name of symbol
 * @param  range Range of HashTable
 * @return       index to Hash
 */
unsigned int GetHash(const char* name, unsigned range);

// Free LocTable, use SymbolTableFree function
/**
 * Erase LocTable in Context and recursive all Contents stored in Hash table
 * @param Cont Pointer to Context
 */
void ContextLocTableFree(Context* Cont);

// Free SymbolTable and included Strin
/**
 * Free SymbolTable TODO? String if included?
 * @param symbol pointer to SymbolTable
 */
void SymbolTableFree(SymbolTable* symbol);

/**
 * Find Symbol with specific name
 * @param  Cont Content where to find
 * @param  name Name which we want
 * @return      Pointer to SymbolTable, NULL if failed
 */
SymbolTable *SymbolFind(Context *Cont, char *name);

/**
 * Add symbol to Context
 * @param  FunCont       Context where symbol will be
 * @param  type          Type of symbol
 * @param  name          Name of symbol
 * @param  SymbolContext Pointer to symbol's Context if type is T_FunPointer
 * @param  foundSymbol   If not null, function dont have to call again SymbolFind
 * @return               Pointer to SymbolTable, NULL if failed
 */
SymbolTable *SymbolAdd(Context *FunCont, SymbolType type, char *name, Context *SymbolContext, SymbolTable *foundSymbol);



#endif
