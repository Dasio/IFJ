// file for IAL 21.11.2014
// function: FindString (find substring in string and return index) xkello00
// 					used: Knuth-Moris-Prattuv algorithm
// function: QuickSort make ordered array of chars
// 					used: QuickSort algorithm

#include "system.h"
#include "string.h"
#include "vector.h"

#ifndef ial_H
#define ial_H

#include "symbol.h"

//struct SymbolTableStruct;
//typedef struct SymbolTableStruct SymbolTable;


int FindString(String *in, String *substring);
int *GetFormula(String*);

// Use QuickSortRecursive (faster)
void QuickSort(char []);

void QuickSortNonRecursive(char []);
void QuickSortRecursive(char *, int);

// Return hash depend on char* and (uint)length
unsigned int GetHash(const char*, unsigned);

// Free LocTable, use SymbolTableFree function
void ContextLocTableFree(Context*);

// Free SymbolTable and included String
void SymbolTableFree(SymbolTable*);

// FindSymbol in Context, return his address/NULL if failed
SymbolTable *SymbolFind(Context *, char *);

// SymbolAdd if error or symbol already exist return NULL and set Err to ERR_Unknown
SymbolTable *SymbolAdd(Context*, SymbolType, int, char*, Context*);



#endif
