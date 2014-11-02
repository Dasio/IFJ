/**
 * Recreated 2.10.2014
 * vector.c IFJ
 */
#include "vector.h"

/**
 * Generates functions for appropriate type.
 * Moved to vector.c, used only for generating
 * within same module.
 * @param  type Type for generalization
 */
#define GenVectorFunctions(type) 											\
	type##Vector * type##InitVector(uint32_t initial_size) {				\
		if(initial_size == 0)												\
			initial_size = VECTOR_DEFAULT_SIZE;								\
		type##Vector *Vect = malloc(sizeof(type##Vector));					\
		if (Vect == NULL)		                            				\
        {					                                            	\
            setError(ERR_Allocation)				                		\
            return NULL;					                            	\
        }					                                            	\
		Vect->used = 0;														\
		Vect->capacity = initial_size;										\
		Vect->array = malloc(Vect->capacity * sizeof(type));			    \
		if (Vect->array == NULL)					                        \
        {					                                            	\
            setError(ERR_Allocation)			                           	\
            free(Vect);					                                    \
            return NULL;					                                \
        }					                                            	\
		return Vect;														\
	}																		\
	void type##VectorAppend(type##Vector *Vect, type Value) {				\
		if(Vect->capacity == Vect->used)									\
		{																	\
			Vect->capacity *= 2;											    \
			Vect->array = realloc(Vect->array, Vect->capacity * sizeof(type));	\
			if (Vect->array == NULL)										    \
            {										                       	\
                setError(ERR_Allocation)									\
                return;										            	\
            }				                                                \
		}																	\
		/* tmp - pointer on last Value */									\
		type *tmp;                                                          \
		tmp = (type*)Vect->array + Vect->used;   		                    \
		*tmp = Value;														\
		Vect->used++;														\
	}																		\
	void type##VectorPushMore(type##Vector *Vect, uint32_t number) {	    \
		while(Vect->capacity < Vect->used+number)							\
		{																	\
			Vect->capacity *= 2;											    \
			Vect->array = realloc(Vect->array, Vect->capacity * sizeof(type));	\
			if (Vect->array == NULL)								            \
            {								                                \
                setError(ERR_Allocation)				                    \
                return;								                        \
            }							                	                \
		}																	        \
		memset((void*)((type*)Vect->array + Vect->used), 0, number*sizeof(type));	\
		/* Set used values */												        \
		Vect->used += number;												\
	}																		\
	type *type##VectorPop(type##Vector *Vect) {								\
		if(Vect->used < 1)													\
		{																	\
			setError(ERR_Unknown);											\
			return NULL;													\
		}																	\
		Vect->used--; /* Mark last value as invalid and return its address*/\
		return (type*)Vect->array + Vect->used;								\
	}																		\
	type type##VectorPopValue(type##Vector *Vect) {							\
		if(Vect->used < 1)													\
		{																	\
			setError(ERR_Unknown);											\
			return (type)0;												    \
		}																	\
		Vect->used--; /* Mark last value as invalid and return its address*/\
        type *r = (type*)Vect->array + Vect->used;				\
		return *r;												            \
	}																		\
	type *type##VectorPopMore(type##Vector *Vect, uint32_t number) {		\
		if(Vect->used < number)												\
		{																	\
			setError(ERR_Unknown);											\
			return NULL;													\
		}																	            \
		Vect->used -= number; /* Mark last X value as invalid and return last address*/ \
		return (type*)Vect->array + Vect->used;								            \
	}																		\
	type *type##VectorFirst(type##Vector *Vect){							\
        if(Vect->used == 0) return NULL;                                    \
		return Vect->array;												    \
	}                           											\
	type type##VectorFirstValue(type##Vector *Vect){						\
        if(Vect->used == 0) return (type)0;                               \
        type *r = Vect->array;												\
		return *r;												            \
	}                           											\
	type *type##VectorLast(type##Vector *Vect) {					    	\
        if(Vect->used == 0) return NULL;                                    \
		return (type*)Vect->array+ (Vect->used-1);                          \
	}																		\
	type type##VectorLastValue(type##Vector *Vect) {					    \
        if(Vect->used == 0) return (type)0;                                 \
        type *r = (type*)Vect->array+ (Vect->used-1);                       \
		return *r; 									                    	\
	}																		\
	void type##VectorFree(type##Vector *Vect) {								\
		if(Vect == NULL) return;											\
		if(Vect->array) free(Vect->array);									\
		free(Vect);															\
		Vect = NULL;                                                        \
	}

// generation functions for vector
GenVectorFunctions(int)
GenVectorFunctions(double)
//GenVectorFunctions(DATA)
