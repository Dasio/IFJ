/*
 * vector.h
 *
 *  Created on: 28.9.2014
 *  TODO: Authors
 */

#include "system.h"
#include "error.h"
#include "token.h"

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

#define GenVectorPrototypes(type) 		\
	typedef Vector type##Vector;		\
	type##Vector * init##type##Vector(uint32_t initial_size); 	\
	void type##VectorAppend(type##Vector *Vect, type Value);  	\
	type *type##VectorLast(type##Vector *Vect);					\
	void type##VectorFree(type##Vector *Vect);					\
	type *type##VectorFirst(type##Vector *Vect);				\
	type *type##VectorPop(type##Vector *Vect);

///////////////////////////////////
// Definition of Vector subtypes //
///////////////////////////////////

GenVectorPrototypes(int)
GenVectorPrototypes(Token)

// TODO
// ##type##VectorAt(uint32_t, ##type##Vector *);
// ##type##VectorSize(##type##Vector *);

// ! Neskor prirobit makra, aby sa dalo volat append(tokenVector, token);
// Ukazka generickeho makra
/* #define append(vec, elem) _Generic((vec),                \
                                 TokenVector *: appendToTokenVector(elem),  \
                                 OtherVector *: appendToTokenVector)(vec, elem) */

#endif
