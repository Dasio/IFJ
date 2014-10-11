#include "../system.h"
#include "../string.h"

int main() {
	String str1 = initEmptyString();

	for(char i = 'a'; i <= 'z'; i++) {
		appendCharToString(&str1, i);
	}

	String str2 = initEmptyString();

	for(char i = 'a'; i <= 'z'; i++) {
		appendCharToString(&str2, i);
	}

	printString(&str1);  printf("\n");
	printString(&str2);  printf("\n");
	assert(streq(&str1, &str2) == true);

	truncateString(&str1);
	truncateString(&str2);
	assert(streq(&str1, &str2) == true);

	appendCharToString(&str1, 'x');
	assert(streq(&str1, &str2) == false);

	destroyString(&str1);
	destroyString(&str2);
	printf("OK\n");
}
