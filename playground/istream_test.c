#include "../istream.h"

int main() {
	printf("---- TEST 1 -----\n");
	IStream source_file = initIStream();

	// Test 1 - from file
	if(!assignFile(&source_file, "testFile.txt")) {
		fprintf(stderr, "Cannot open source file\n");
		return 1;
	}

	int c;
	unsigned pos = 0;

	// Feed me next char if there is any
	// + writes every char twice
	while( (c = nextChar(&source_file)) != EOF) {
		printf("%c", c);
		if(pos % 2 == 0) {
			returnChar(&source_file, c);
		}
		pos++;
	}

	// fcloses FILE, structure may be reused
	destroyIStream(&source_file);

	//----------------------------------------------------
	// Test 2 - from string
	assignString(&source_file, "integer a := _05274;\n");

	printf("---- TEST 2 -----\n");
	// Feed me next char if there is any
	// + writes every char twice
	while( (c = nextChar(&source_file)) != EOF) {
		printf("%c", c);
		if(pos % 2 == 0) {
			returnChar(&source_file, c);
		}
		pos++;
	}

	return 0;
}
