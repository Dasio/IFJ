#include "system.h"
#include "vector.h"

//write Last number in vector
#define WriteLast	\
	tmp = intVectorLast(vector);	\
	printf("Last number %d\n", *tmp)

/*
 * vector.c
 *
 *  Created on: 28.9.2014
 *      Author: Adam Lucansky <xlucan01@stud.fit.vutbr.cz>
 */

// Dummy types
//GenVectorFunctions(int)
//GenVectorFunctions(double)

NewVectorType(int);

int main() {
	intVector *vector = initintVector(4);

	// Add value to vector
	int *tmp = vector->array;
	intVectorAppend(vector, 1);
	intVectorAppend(vector, 2);
	intVectorAppend(vector, 3);
	WriteLast;
	intVectorAppend(vector, 4);
	WriteLast;
	intVectorAppend(vector, 5);
	WriteLast;
	intVectorAppend(vector, 3);
	intVectorAppend(vector, 4);
	intVectorAppend(vector, 5);
	intVectorAppend(vector, 6);
	intVectorAppend(vector, 7);
	WriteLast;
	intVectorAppend(vector, 8);
	intVectorAppend(vector, 9);
	intVectorAppend(vector, 10);
	intVectorAppend(vector, 11);
	intVectorAppend(vector, 12);
	intVectorAppend(vector, 13);
	intVectorAppend(vector, 14);
	WriteLast;
	intVectorAppend(vector, 15);
	intVectorAppend(vector, 16);
	intVectorAppend(vector, 17);
	WriteLast;
	intVectorAppend(vector, 18);
	intVectorAppend(vector, 18);
	intVectorAppend(vector, 19);
	intVectorAppend(vector, 20);
	WriteLast;

	intVectorFree(vector);
}
