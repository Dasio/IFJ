// file for IAL 21.11.2014
// function: FindString (find substring in string and return index) xkello00
// 					used: Knuth-Moris-Prattuv algorithm
// function: QuickSort make ordered array of chars
// 					used: QuickSort algorithm

#include "system.h"
#include "string.h"
#include "vector.c"

#ifndef ial_H
#define ial_H

int FindString(String *in, String *substring);
int *GetFormula(String*);

void QuickSort(char*);
uint16_t len(char *);

#endif
