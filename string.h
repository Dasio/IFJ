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
	String initString(char *src);

	void printString(String *dst);
	void aboutString(String *dst);
	void appendCharToString(String *dst, char c);

/* #define appendToString(dst, src) _Generic((src),					\
									String *: appendStringToString, \
									default:  appendCharsToString)(dst, src)
*/
#define streq(dst, src) _Generic((src),                \
						String *: equalsStringString,  \
						default:  equalsStringChars)(dst, src)

	// Do not use! Use streq()
	bool equalsStringChars(String *str1, char *str2);
	bool equalsStringString(String *str1, String *str2);

	//static void reallocString(String *dst, unsigned newSize);
	void truncateString(String *dst);
	void destroyString(String *dst);

#endif
