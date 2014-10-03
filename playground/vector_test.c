#include "../system.h"
#include "../vector.h"
NewVectorType(Int);
GenVectorFunctions(Int);

int main() {
	IntVector * vector = initIntVector(8);

	//int t = {.attr = 1};

	// Invaliduje ukazatele
	IntVectorAppend(vector, 10);

	// Premenovane na At miesto Get
	//int * t2 = IntVectorAt(0, vector);
	//t2->attr vrati 1

	// vracia ukazetel na dany prvok v poli
	int * tmp = IntVectorLast(vector);
	printf("cislo %d\n", *tmp);
	char a;
	scanf("%c", &a);
	//IntVectorBack(vector);

	// vracia uint32_t
	//TokenVectorCapacity(vector);
	//TokenVectorSize(vector);

	IntVectorFree(vector);
}
