/*
 * vector.h
 *
 *  Created on: 28.9.2014
 *      Author: Adam Lucansky <xlucan01@stud.fit.vutbr.cz>
 */

#include "system.h"

#ifndef VECTOR_H
#define VECTOR_H
#define VECTOR_DEFAULT_SIZE 8

	typedef struct {
		/** Allocated elements, including uninitialized */
		uint32_t capacity;

		/** Used elements */
		uint32_t used;

		/** Size of each element in vector (sizeof()) */
		uint8_t atomic_size;

		/** Pointer to beginning of array */
		void *array;
	} Vector;


/**
 * Macro called from header file to generate appropriate prototypes
 * for define type
 * @param  type Type for generalization
 */

#define NewVectorType(type) \
	GenVectorPrototypes(type) \
	GenVectorFunctions(type)

#define GenVectorPrototypes(type) 		\
	typedef Vector type##Vector;

///////////////////////////////////
// Definition of Vector subtypes //
///////////////////////////////////
//
//GenVectorPrototypes(int)
//GenVectorPrototypes(double)
//
// ADD HERE EVERY TYPE THAT NEEDS TO HAVE *Vector
// ALSO IN VECTOR.C

/**
 * Generates functions for appropriate type
 * @param  type Type for generalization
 */

#define GenVectorFunctions(type) 											\
	/** Initialized vector with initial_size, if zero, uses default (8) */ 	\
	type##Vector * init##type##Vector(uint32_t initial_size) {				\
		if(initial_size == 0)												\
			initial_size = VECTOR_DEFAULT_SIZE;								\
		type##Vector *Vect = malloc(sizeof(type##Vector));					\
		if (Vect == NULL) printf("ERROR malloc 1\n");						\
		Vect->used = 0;														\
		Vect->capacity = initial_size;										\
		Vect->atomic_size = sizeof(type);									\
		Vect->array = malloc(Vect->capacity * Vect->atomic_size);			\
		if (Vect->array == NULL) printf("ERROR malloc 2\n");				\
		return Vect;														\
	}																		\
	/** Add Value to end of vector */								 		\
	void type##VectorAppend(type##Vector *Vect, type Value) {				\
		if(Vect->capacity == Vect->used)									\
		{																	\
			Vect->capacity *= 2;											\
			Vect->array = realloc(Vect->array, Vect->capacity * Vect->atomic_size);	\
			if (Vect->array == NULL) printf("ERROR realloc 1\n");			\
		}																	\
		/* tmp - pointer on last Value */									\
		type *tmp = Vect->array + Vect->used * Vect->atomic_size;			\
		*tmp = Value;														\
		Vect->used++;														\
	}																		\
	/** Return pointer to Last Value */								 		\
	type *type##VectorLast(type##Vector *Vect) {							\
		return Vect->array + (Vect->used-1) * Vect->atomic_size;			\
	}																		\
	/** Free array from Vector */									 		\
	void type##VectorFree(type##Vector *Vect) {								\
		free(Vect->array);													\
		free(Vect);															\
	}																		\
	type *type##VectorFirst(type##Vector *Vect){							\
		return Vect->array;													\
	}																		\
	type *type##VectorPop(type##Vector *Vect) {								\
		Vect->used--; /* Mark last value as invalid and return its address*/\
		return Vect->array + Vect->used * Vect->atomic_size;				\
	}


// ##type##VectorAt(uint32_t, ##type##Vector *);
// Kandidati na makro/funkciu
// 
// ##type##VectorBack(##type##Vector *);
// ##type##VectorSize(##type##Vector *);

// ! Neskor prirobit makra, aby sa dalo volat append(tokenVector, token);
// Ukazka generickeho makra
/* #define append(vec, elem) _Generic((vec),                \
                                 TokenVector *: appendToTokenVector(elem),  \
                                 OtherVector *: appendToTokenVector)(vec, elem) */

#endif
