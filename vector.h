/*
 * vector.h
 *
 *  Created on: 28.9.2014
 *      Author: Adam Lucansky <xlucan01@stud.fit.vutbr.cz>
 */

#include "system.h"

#ifndef VECTOR_H_
#define VECTOR_H_

	typedef struct {
		/** Allocated capacity, including uninitialized */
		uint32_t capacity;
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
	typedef Vector type##Vector;		\
	type##Vector * init##type##Vector();

///////////////////////////////////
// Definition of Vector subtypes //
///////////////////////////////////
GenVectorPrototypes(int)
GenVectorPrototypes(double)
// ADD HERE EVERY TYPE THAT NEEDS TO HAVE *Vector
// ALSO IN VECTOR.C

/**
 * Generates functions for appropriate type
 * @param  type Type for generalization
 */
#define GenVectorFunctions(type) 									\
	/** Initialized vector with initial_size, if zero, uses default */ \
	type##Vector * init##type##Vector(uint32_t initial_size) {		\
		if(initial_size == 0)										\
			initial_size = VECTOR_INIT_SIZE;						\
		type##Vector * tmp = malloc(sizeof(type) * initial_size);	\
		tmp->capacity = VECTOR_INIT_SIZE;							\
		tmp->atomic_size = sizeof(type);							\
		tmp->array = NULL;											\
		return tmp;													\
	}
	// etc.

// Kandidati na makro/funkciu
// #type#VectorAppend(#type#Vector *, type *)
// #type#VectorFree(#type#Vector *);
// #type#VectorFront(#type#Vector *);
// #type#VectorBack(#type#Vector *);
// #type#VectorSize(#type#Vector *);
// #type#VectorCapacity(#type#Vector *);

// ! Neskor prirobit makra, aby sa dalo volat append(tokenVector, token);
// Ukazka generickeho makra
/* #define append(vec, elem) _Generic((vec),                \
                                 TokenVector *: appendToTokenVector(elem),  \
                                 OtherVector *: appendToTokenVector)(vec, elem) */

#endif
