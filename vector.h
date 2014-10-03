/*
 * vector.h
 *
 *  Created on: 28.9.2014
 *      Author: Adam Lucansky <xlucan01@stud.fit.vutbr.cz>
 */

#include "system.h"

#ifndef VECTOR_H
#define VECTOR_H

	typedef struct {
		/** Allocated capacity, including uninitialized */
		uint32_t capacity;
		/** Used capacity */
		uint32_t used;
		/** Size of each element in vector (sizeof()) */
		uint8_t atomic_size;
		/** Pointer to beginning */
		void *array;
	} Vector;


#define VECTOR_INIT_SIZE 8

#define NewVectorType(type) \
	GenVectorPrototypes(type)

/**
 * Macro called from header file to generate appropriate prototypes
 * for define type
 * @param  type Type for generalization
 */
#define GenVectorPrototypes(type) 		\
	typedef Vector #type#Vector;
//	#type#Vector * init#type#Vector();

///////////////////////////////////
// Definition of Vector subtypes //
///////////////////////////////////
GenVectorPrototypes(Int)
GenVectorPrototypes(Double)
// ADD HERE EVERY TYPE THAT NEEDS TO HAVE *Vector
// ALSO IN VECTOR.C

/**
 * Generates functions for appropriate type
 * @param  type Type for generalization
 */
#define GenVectorFunctions(type) 											\
	/** Initialized vector with initial_size, if zero, uses default */ 		\
	#type#Vector * init#type#Vector(uint32_t initial_size) {				\
		if(initial_size == 0)												\
			initial_size = VECTOR_INIT_SIZE;								\
		#type#Vector * tmp = malloc(sizeof(#type#Vector));					\
		tmp->capacity = initial_size;										\
		tmp->atomic_size = sizeof(type);									\
		tmp->array = malloc(tmp->capacity * tmp->atomic_size);				\
		return tmp;															\
	}																		\
	/** Add Value to end ofvector */								 		\
	void #type#VectorAppend(#type#Vector * Vect, ##type Value) {			\
		if(Vect->capacity == Vect->atomic_size)								\
		{																	\
			Vect->capacity *= 2;											\
			realloc(Vect->array, Vect->capacity * Vect->atomic_size);		\
		}																	\
		Vect->atomic_size++;												\
		Vect->array[Vect->atomic_size] = Value;								\
		return;																\
	}																		\
	/** Return pointer to Last Value */								 		\
	##type * #type#VectorLast(#type#Vector * Vect) {						\								\
		return Vect->array + Vect->capacity * Vect->atomic_size;			\
	}																		\
	/** Free array from Vector */									 		\
	#type#VectorFree(#type#Vector * Vect) {									\
		free(Vect->array);													\
	}


// #type#VectorAt(uint32_t, #type#Vector *);
// Kandidati na makro/funkciu
// 
// #type#VectorFirst(#type#Vector *);
// #type#VectorBack(#type#Vector *);
// #type#VectorSize(#type#Vector *);

// ! Neskor prirobit makra, aby sa dalo volat append(tokenVector, token);
// Ukazka generickeho makra
/* #define append(vec, elem) _Generic((vec),                \
                                 TokenVector *: appendToTokenVector(elem),  \
                                 OtherVector *: appendToTokenVector)(vec, elem) */

#endif
