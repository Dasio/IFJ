#include "../system.h"
#include "../vector.h"

int main() {
	TokenVector * vector = initintVector(8);

	Token t = {.attr = 1};

	// Invaliduje ukazatele
	TokenVectorAppend(vector, &t);

	Token * t2 = TokenVectorGet(0, vector);
	//t2->attr vrati 1

	// vracia ukazetel na dany prvok v poli
	TokenVectorFront(vector);
	TokenVectorBack(vector);

	// vracia uint32_t
	//TokenVectorCapacity(vector);
	//TokenVectorSize(vector);

	TokenVectorFree(vector);
}
