/*
 * vector.h
 *
 *  Created on: 28.9.2014
 *  TODO: Authors
 */
#ifndef VECTOR_H
#define VECTOR_H

#include "error.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "token.h"
#include "symbol.h"

/*
____ == type of vector
--------------------------------------
* GenVectorPrototypes(type)	
* return pointer for work with structures or values
* 
* ____InitVector(initial_size);
* 
* ____VectorAppend(*Vect, Value);
* ____VectorPushMore(*Vect, Number);
* ____VectorPop(*Vect);
* ____VectorPopMore(*Vect, Number);
* 
* ____VectorFirst(*Vect);
* ____VectorLast(*Vect);
* 
* ____VectorFree(*Vect);
* 
*
* GenVectorPrototypesValues(type)
* return ONLY values if structure is int, double, float...
* 
* ____VectorPopValue(*Vect);
* ____VectorFirstValue(*Vect);
* ____VectorLastValue(*Vect);
* 
*/
#define VECTOR_DEFAULT_SIZE 8

struct Vector{
	/** Allocated elements, including uninitialized */
	uint32_t capacity;

	/** Used elements */
	uint32_t used;

	/** Pointer to beginning of array */
	void *array;
};

/** if function failed, NULL poiter (or FALSE) is returned */
#define GenVectorPrototypes(type)								\
	typedef struct Vector type##Vector;							\
	\
	\
	/** Initialized vector with initial_size*/					\
	/** if zero, uses default (8) */							\
	/** error if malloc failed: return NULL */ 					\
	type##Vector * type##InitVector(uint32_t initial_size); 	\
	\
	/** Add Value to end of vector - ERR_Allocation */			\
	/** error if realloc failed: return 0 */					\
	bool type##VectorAppend(type##Vector *Vect, type Value);	\
	\
	/** Reserve space in Vector */								\
	/** error if malloc failed: return 0 */						\
	bool type##VectorPushMore(type##Vector *Vect, uint32_t);	\
	\
	/** Return pointer to POP Value */							\
	/** error if empty: return NULL */							\
	type *type##VectorPop(type##Vector *Vect);					\
	\
	/** delete more items */									\
	/** error if not enought values: return NULL */				\
	type *type##VectorPopMore(type##Vector *Vect, uint32_t);	\
	\
	/** Return pointer to first Value */						\
	/** error if empty: return NULL */							\
	type *type##VectorFirst(type##Vector *Vect);				\
	\
	/** Return pointer to Last Value */							\
	/** error if empty: return NULL */							\
	type *type##VectorLast(type##Vector *Vect);					\
	\
	/** Free array from Vector */								\
	void type##VectorFree(type##Vector *Vect);


/** Important to chack ERRORs if value is valid */
#define GenVectorPrototypesValues(type)							\
	\
	/** Return last Value */									\
	/** error if empty: return 0 + setError */					\
	type type##VectorLastValue(type##Vector *Vect);				\
	\
	/** Return first Value */									\
	/** error if empty: return 0 + setError */					\
	type type##VectorFirstValue(type##Vector *Vect);			\
	\
	/** Return POP Value */										\
	/** error if empty: return 0 + setError */					\
	type type##VectorPopValue(type##Vector *Vect);





// generate prototypes for funciton

GenVectorPrototypes(int)
GenVectorPrototypesValues(int)
GenVectorPrototypes(double)
GenVectorPrototypesValues(double)
GenVectorPrototypes(Token)
//GenVectorPrototypes(StackData)

#endif // VECTOR_H
