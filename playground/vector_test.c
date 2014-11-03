#include "../system.h"
#include "../vector.h"

#define WriteLast	\
	tmp = intVectorLast(vector);	\
	printf("Last number %d\n", *tmp);

int main() {
	intVector *vector = intInitVector(4);

	//int t = {.attr = 1};

	// Add value to vector
	int *tmp = vector->array;
	intVectorAppend(vector, 1);
	intVectorAppend(vector, 2);
	intVectorAppend(vector, 3);
	WriteLast
	intVectorAppend(vector, 4);
	WriteLast
	intVectorAppend(vector, 5);
	WriteLast
	intVectorAppend(vector, 3);
	intVectorAppend(vector, 4);
	intVectorAppend(vector, 5);
	intVectorAppend(vector, 6);
	intVectorAppend(vector, 7);
	WriteLast
	intVectorAppend(vector, 8);
	intVectorAppend(vector, 9);
	intVectorAppend(vector, 10);
	intVectorAppend(vector, 11);
	intVectorAppend(vector, 12);
	intVectorAppend(vector, 13);
	intVectorAppend(vector, 14);
	WriteLast
	intVectorAppend(vector, 15);
	intVectorAppend(vector, 16);
	intVectorAppend(vector, 17);
	WriteLast
	intVectorAppend(vector, 18);
	intVectorAppend(vector, 18);
	intVectorAppend(vector, 19);
	intVectorAppend(vector, 20);

	// Premenovane na At miesto Get
	//int * t2 = IntVectorAt(0, vector);
	//t2->attr vrati 1

	// return pointer to last value
	//intVectorLast(vector);
	//IntVectorBack(vector);

	// return uint32_t
	//TokenVectorCapacity(vector);
	//TokenVectorSize(vector);
	//


	tmp = intVectorLast(vector);
	printf("Last number %d\n", *tmp);

	intVectorFree(vector);
	//wait to keypress
	//char a;
	//scanf("%c", &a);
}
