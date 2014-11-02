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

/*
____ == type of vector
--------------------------------------
return pointer for work with structures
return values if structure is int, double, float...

____InitVector(initial_size);

____VectorAppend(*Vect, Value);
____VectorPushMore(*Vect, Number);
____VectorPop(*Vect);
____VectorPopValue(*Vect);
____VectorPopMore(*Vect, Number);

____VectorFirst(*Vect);
____VectorFirstValue(*Vect);
____VectorLast(*Vect);
____VectorLastValue(*Vect);

____VectorFree(*Vect);
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

#define GenVectorPrototypes(type) 	                        	\
	typedef struct Vector type##Vector;	                    	\
	\
	\
	/** Initialized vector with initial_size, if zero, uses default (8) */ 	\
	/** ERR_Allocation and return NULL */ 	                    \
	type##Vector * type##InitVector(uint32_t initial_size); 	\
	\
	/** Add Value to end of vector - ERR_Allocation */			\
	/** ERR_Allocation */ 	                                    \
	void type##VectorAppend(type##Vector *Vect, type Value);  	\
	\
	/** Reserve space in Vector */								\
	/** error malloc failed: return NULL + ERR_Unknown */       \
	void type##VectorPushMore(type##Vector *Vect, uint32_t);	\
	\
	/** Return pointer to POP Value */     						\
	/** error if empty: return NULL */                          \
	type *type##VectorPop(type##Vector *Vect);					\
	\
	/** Return POP Value */        								\
	/** error if empty: return NULL */                          \
	type type##VectorPopValue(type##Vector *Vect);				\
	\
	/** delete more items */        							\
	/** error if not enought values: return NULL + ERR_Unknown */\
	type *type##VectorPopMore(type##Vector *Vect, uint32_t);    \
	\
	/** Return pointer to first Value */        				\
	/** error if empty: return NULL */                          \
	type *type##VectorFirst(type##Vector *Vect);				\
	\
	/** Return first Value */        							\
	/** error if empty: return NULL */                          \
	type type##VectorFirstValue(type##Vector *Vect);			\
	\
	/** Return pointer to Last Value */        					\
	/** error if empty: return NULL */                          \
	type *type##VectorLast(type##Vector *Vect);					\
	\
	/** Return last Value */        					        \
	/** error if empty: return NULL */                          \
	type type##VectorLastValue(type##Vector *Vect);				\
	\
	/** Free array from Vector */								\
	void type##VectorFree(type##Vector *Vect);

// generate prototypes for funciton

GenVectorPrototypes(int)
GenVectorPrototypes(double)
GenVectorPrototypes(Token)

//GenVectorPrototypes(DATA)
#endif // VECTOR_H
