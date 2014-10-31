#include "string.h"

String initEmptyString()
{
	String str = {
		.length  = 0,
		.allocated_size = STRING_INIT_ALLOC_SIZE,
		.data    = malloc(STRING_INIT_ALLOC_SIZE * sizeof(char))
	};
	MALLOC_TEST(str.data);


	return str;
}

void destroyString(String *dst) {
	if(dst->allocated_size > 0)
		free(dst->data);
	dst->allocated_size = 0;
	dst->length = 0;
}

void printString(String *dst)
{
	assert(dst);
	assert(dst->allocated_size > 0 &&
								"Performed operation on uninitialized String");

	if(dst->length > 0) {
		printf("%s", dst->data);
	}
}

void aboutString(String *dst) {
	printf("STR: allocated %u ,length %u\n", dst->allocated_size, dst->length);
}

String initString(char *src)
{
	assert(src);
	uint32_t size = strlen(src);
	String str = {
		.length  = size,
		.allocated_size = size,
		.data    = malloc(size * sizeof(char)+1) // +1 for last character '\0'
	};
	MALLOC_TEST(str.data);
	memcpy(str.data,src,size);
	str.data[size] = '\0';
	return str;
}

void appendCharToString(String *dst, char c)
{
	assert(dst);
	assert(dst->allocated_size > 0 &&
								"Performed operation on uninitialized String");

	// Double allocated space every potencial overflow
	// !! Side-effect condition
	if(++dst->length + 1 > dst->allocated_size) {
		dst->allocated_size *= 2;
		dst->data = realloc(dst->data, dst->allocated_size);

		assert(dst->length < dst->allocated_size);
	}

	assert((int32_t) dst->length - 1 >= 0);

	dst->data[dst->length - 1] = c;
	dst->data[dst->length] = (char) 0;
	// Due to performance, not clearing all remaning bytes
}

void truncateString(String *dst) {
	assert(dst);
	if(dst->allocated_size > 0) {
		// Cutting string with zero byte
		dst->data[0] = (char) 0;
		dst->length = 0;
	}
}

// Do not use! Use streq()
bool equalsStringChars(String *str1, char *str2)
{
	assert(str1); assert(str2);
	return (strcmp(str1->data, str2) == 0);
}

// Do not use! Use streq()
bool equalsStringString(String *str1, String *str2)
{
	assert(str1); assert(str2);
	return (strcmp(str1->data, str2->data) == 0);
}
