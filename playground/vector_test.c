#include "../system.h"
#include "../vector.h"

int main() {
	TokenVector * vector = initTokenVector(8);

	Token t = {.attr = 1};

	// Invaliduje ukazatele
	TokenVectorAppend(vector, &t);

	// Premenovane na At miesto Get
	Token * t2 = TokenVectorAt(0, vector);
	//t2->attr vrati 1

	// vracia ukazetel na dany prvok v poli
	TokenVectorFront(vector);
	TokenVectorBack(vector);

	// vracia uint32_t
	//TokenVectorCapacity(vector);
	//TokenVectorSize(vector);

	TokenVectorFree(vector);
}
