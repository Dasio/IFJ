/*
 * vector.h
 *
 *  Created on: 28.9.2014
 *  TODO: Authors
 */
// #include "stack.h"
#ifndef VECTOR_H
#define VECTOR_H

#include "system.h"
#include "error.h"

/*
____ == type of vector
--------------------------------------
* GenVectorPrototypes(type)
* return pointer for work with structures or values
*
* ____VectorInit(initial_size);
*
* ____VectorAppend(*Vect, Value);
* ____VectorPushMore(*Vect, Number);
* ____VectorPop(*Vect);
* ____VectorPopMore(*Vect, Number);
*
* ____VectorAtSet(*Vect, Index, Value)
* ____VectorAt(*Vect, Index);
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
	type##Vector * type##VectorInit(uint32_t initial_size); 	\
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
	/** error if not enought values: return NULL & set error */	\
	type *type##VectorPopMore(type##Vector *Vect, uint32_t);	\
	\
	/** delete more items */									\
	/** error if not enought values: return NULL */				\
	void type##VectorAtSet(type##Vector *Vect, uint32_t, type);	\
	\
	/** delete more items */									\
	/** error if not enought values: return NULL */				\
	type *type##VectorAt(type##Vector *Vect, uint32_t);			\
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
	/** Return index Value */									\
	/** error if empty: return 0 + setError */					\
	type type##VectorAtValue(type##Vector *Vect, uint32_t);		\
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


/**
 * Generates functions for appropriate type.
 * Moved to vector.c, used only for generating
 * within same module.
 * @param  type Type for generalization
 *
 * GenVectorFunctions(int)
 * for vector of structure and pointers
 * returns ONLY pointers
 *
 * GenVectorFunctionsValues(int)
 * added functions which return directly values
 *
 */
#define GenVectorFunctions(type) 											\
	type##Vector * type##VectorInit(uint32_t initial_size) {				\
		if(initial_size == 0)												\
			initial_size = VECTOR_DEFAULT_SIZE;								\
		type##Vector *Vect = malloc(sizeof(type##Vector));					\
		if (Vect == NULL)													\
			return NULL;													\
		Vect->used = 0;														\
		Vect->capacity = initial_size;										\
		Vect->array = malloc(Vect->capacity * sizeof(type));				\
		if (Vect->array == NULL)											\
		{																	\
			free(Vect);														\
			return NULL;													\
		}																	\
		return Vect;														\
	}																		\
	bool type##VectorAppend(type##Vector *Vect, type Value) {				\
		if(Vect->capacity == Vect->used)									\
		{																	\
			Vect->capacity *= 2;												\
			Vect->array = realloc(Vect->array, Vect->capacity * sizeof(type));	\
			if (Vect->array == NULL)											\
				return 0;													\
		}																	\
		/* tmp - pointer on last Value */									\
		type *tmp;															\
		tmp = (type*)Vect->array + Vect->used;								\
		*tmp = Value;														\
		Vect->used++;														\
		return 1;															\
	}																		\
	bool type##VectorPushMore(type##Vector *Vect, uint32_t number) {		\
		while(Vect->capacity < Vect->used+number)							\
		{																	\
			Vect->capacity *= 2;												\
			Vect->array = realloc(Vect->array, Vect->capacity * sizeof(type));	\
			if (Vect->array == NULL) return 0;									\
		}																			\
		memset((void*)((type*)Vect->array + Vect->used), 0, number*sizeof(type));	\
		/* Set used values */														\
		Vect->used += number;												\
		return 1;															\
	}																		\
	type *type##VectorPop(type##Vector *Vect) {								\
		if(Vect->used < 1) return NULL;										\
		Vect->used--; /* Mark last value as invalid and return its address*/\
		return (type*)Vect->array + Vect->used;								\
	}																		\
	type *type##VectorPopMore(type##Vector *Vect, uint32_t number) {		\
		if(Vect->used < number) { setError(ERR_OutOfRange) return NULL; }				\
		Vect->used -= number; /* Mark last X value as invalid and return last address*/ \
		return (type*)Vect->array + Vect->used;											\
	}																		\
	void type##VectorAtSet(type##Vector *Vect, uint32_t ind, type value) {	\
		if(index >= Vect->capacity)											\
		{																	\
			while(index >= Vect->capacity)									\
				Vect->capacity *= 2;										\
			realloc(Vect->array, Vect->capacity * sizeof(type));			\
		}																	\
		type *tmp;															\
		tmp = (type*)Vect->array + ind;										\
		*tmp = value;														\
	}																		\
	type *type##VectorAt(type##Vector *Vect, uint32_t index) {				\
		if(index >= Vect->used) 											\
			if(index >= Vect->capacity)										\
			{																\
				while(index >= Vect->capacity)								\
					Vect->capacity *= 2;									\
				realloc(Vect->array, Vect->capacity * sizeof(type));		\
			}																\
			Vect->used = index+1;											\
		}																	\
		return (type*)Vect->array + index;									\
	}																		\
	type *type##VectorFirst(type##Vector *Vect){							\
		if(Vect->used == 0) return NULL;									\
		return Vect->array;													\
	}																		\
	type *type##VectorLast(type##Vector *Vect) {							\
		if(Vect->used == 0) return NULL;									\
		return (type*)Vect->array+ (Vect->used-1);							\
	}																		\
	void type##VectorFree(type##Vector *Vect) {								\
		if(Vect == NULL) return;											\
		if(Vect->array) free(Vect->array);									\
		free(Vect);															\
		Vect = NULL;														\
	}


#define GenVectorFunctionsValues(type) 										\
	type type##VectorPopValue(type##Vector *Vect) {							\
		if(Vect->used < 1)													\
		{																	\
			setError(ERR_OutOfRange);										\
			return (type)0;													\
		}																	\
		Vect->used--; /* Mark last value as invalid and return its address*/\
		type *r = (type*)Vect->array + Vect->used;							\
		return *r;															\
	}																		\
	type type##VectorAtValue(type##Vector *Vect, uint32_t index) {			\
		if(index >= Vect->used)												\
		{																	\
			setError(ERR_OutOfRange);										\
			return (type)0;													\
		}																	\
		type *r = (type*)Vect->array + index;								\
		return *r;															\
	}																		\
	type type##VectorFirstValue(type##Vector *Vect){						\
		if(Vect->used == 0) 												\
		{																	\
			setError(ERR_OutOfRange);										\
			return (type)0;													\
		}																	\
		type *r = Vect->array;												\
		return *r;															\
	}																		\
	type type##VectorLastValue(type##Vector *Vect) {						\
		if(Vect->used == 0)													\
		{																	\
			setError(ERR_OutOfRange);										\
			return (type)0;													\
		}																	\
		type *r = (type*)Vect->array+ (Vect->used-1);						\
		return *r;															\
	}

GenVectorPrototypes(int)
GenVectorPrototypesValues(int)
GenVectorPrototypes(uint64_t)
GenVectorPrototypesValues(uint64_t)

#endif // VECTOR_H
