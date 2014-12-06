#include "system.h"

#ifndef STRING_H
#define STRING_H

#define STRING_INIT_ALLOC_SIZE 8

	typedef struct String
	{
		uint32_t length;
		uint32_t allocated_size;
		char *data;
	} String;

	String initEmptyString();
	String initStringSize(uint32_t size);
	String initString(char *src);

	char atString(String *dst, uint32_t pos);
	char setAtString(String *dst, uint32_t pos, char c);

	void printString(String *dst);
	void aboutString(String *dst);
	void appendCharToString(String *dst, char c);
	void appendCharsToString(String *dst, char *c);
	void appendStringToString(String *dst, String *src);

	/**
	 * Takes two strings, returns new one combining both.
	 * Strings from arguments remain untouched (nondestructive).
	 * @param  src1 First string
	 * @param  src2 Second string
	 * @return      Concatenation of both strings.
	 */
	String *concatStringToString(String *src1, String *src2);

#define StringEquals(dst, src) _Generic((src),                \
						String *: equalsStringString,  \
						default:  equalsStringChars)(dst, src)

	// Do not use! Use StringEquals()
	bool equalsStringChars(String *str1, char *str2);
	bool equalsStringString(String *str1, String *str2);

	//static void reallocString(String *dst, unsigned newSize);
	void truncateString(String *dst);
	void destroyString(String *dst);

#endif
