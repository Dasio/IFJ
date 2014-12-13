/*
 * Project name:
 * Implementace interpretu imperativního jazyka IFJ14
 *
 * Repository:
 * https://github.com/Dasio/IFJ
 *
 * Team:
 * Dávid Mikuš			(xmikus15)
 * Peter Hostačný		(xhosta03)
 * Tomáš Kello			(xkello00)
 * Adam Lučanský		(xlucan01)
 * Michaela Lukášová		(xlukas09)
 */

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

String initStringSize(uint32_t size)
{
	String str = {
		.length  = 0,
		.allocated_size = size,
		.data    = malloc(size * sizeof(char))
	};
	MALLOC_TEST(str.data);

	return str;
}

void destroyString(String *dst) {
	if(dst->allocated_size > 0)
	{
		free(dst->data);
		dst->data = NULL;
	}
	dst->allocated_size = 0;
	dst->length = 0;
}

char atString(String *dst, uint32_t pos) {
	assert(dst);
	assert(pos <= dst->length);

	return dst->data[pos];
}

char setAtString(String *dst, uint32_t pos, char c) {
	assert(dst);
	assert(pos <= dst->length);

	return dst->data[pos] = c;
}

void printString(String *dst)
{
	assert(dst);

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
		.allocated_size = size + 1,
		.data    = malloc((size + 1) * sizeof(char)) // +1 for last character '\0'
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

void appendCharsToString(String *dst, char *c) {
	// TODO: Optimize!
	while(*c != (char)0) {
		appendCharToString(dst, *(c++));
	}
}

String *concatStringToString(String *src1, String *src2) {
	String *tmp = malloc(sizeof(String));
	MALLOC_TEST(tmp);
	uint32_t resulting_length = src1->length + src2->length;

	tmp->length = resulting_length;
	tmp->allocated_size = resulting_length + 1;

	tmp->data = malloc(tmp->allocated_size * sizeof(char));
	MALLOC_TEST(tmp->data);

	memcpy(tmp->data,                src1->data, src1->length);
	memcpy(tmp->data + src1->length, src2->data, src2->length);
	tmp->data[resulting_length] = (char) 0;

	return tmp;
}

void appendStringToString(String *dst, String *src) {
	assert(src);
	assert(dst);

	assert(dst->allocated_size > 0 &&
								"Performed operation on uninitialized String");
	if (src->length > 0)
	{
		assert(src->allocated_size > 0 &&
								"Performed operation on uninitialized String");

		uint32_t resulting_length = src->length + dst->length;
		uint32_t allocated_size = resulting_length + 1;

		if (allocated_size > dst->allocated_size)
		{
			dst->data = realloc(dst->data, allocated_size);
			dst->allocated_size = allocated_size;
		}

		memcpy(dst->data + dst->length, src->data, src->length);
		dst->length = resulting_length;

		dst->data[resulting_length] = '\0';
	}

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
