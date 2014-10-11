#include "system.h"
#include "vector.h"

/*
 * vector.c
 *
 *  Created on: 28.9.2014
 *  TODO: Authors
 */

/**
 * Generates functions for appropriate type.
 * Moved to vector.c, used only for generating
 * within same module.
 * @param  type Type for generalization
 */
#define GenVectorFunctions(type) 											\
	/** Initialized vector with initial_size, if zero, uses default (8) */ 	\
	type##Vector * init##type##Vector(uint32_t initial_size) {				\
		if(initial_size == 0)												\
			initial_size = VECTOR_DEFAULT_SIZE;								\
		type##Vector *Vect = malloc(sizeof(type##Vector));					\
		if (Vect == NULL) setError(ERR_Allocation)						\
		Vect->used = 0;														\
		Vect->capacity = initial_size;										\
		Vect->atomic_size = sizeof(type);									\
		Vect->array = malloc(Vect->capacity * Vect->atomic_size);			\
		if (Vect->array == NULL) setError(ERR_Allocation)				\
		return Vect;														\
	}																		\
	/** Add Value to end of vector */								 		\
	void type##VectorAppend(type##Vector *Vect, type Value) {				\
		if(Vect->capacity == Vect->used)									\
		{																	\
			Vect->capacity *= 2;											\
			Vect->array = realloc(Vect->array, Vect->capacity * Vect->atomic_size);	\
			if (Vect->array == NULL) setError(ERR_Allocation)				\
		}																	\
		/* tmp - pointer on last Value */									\
		type *tmp = (type*)Vect->array + Vect->used;						\
		*tmp = Value;														\
		Vect->used++;														\
	}																		\
	/** Return pointer to Last Value */								 		\
	type *type##VectorLast(type##Vector *Vect) {							\
		return (type*)Vect->array + (Vect->used-1);							\
	}																		\
	/** Free array from Vector */									 		\
	void type##VectorFree(type##Vector *Vect) {								\
		if(Vect == NULL) return;											\
		if(Vect->array) free(Vect->array);									\
		free(Vect);															\
	}																		\
	type *type##VectorFirst(type##Vector *Vect){							\
		return Vect->array;													\
	}																		\
	type *type##VectorPop(type##Vector *Vect) {								\
		Vect->used--; /* Mark last value as invalid and return its address*/\
		return (type*)Vect->array + Vect->used;								\
	}

//NewVectorType(int)
GenVectorFunctions(int)
