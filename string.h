#include "system.h"

#ifndef STRING_H
#define STRING_H

#define STRING_INIT_ALLOC_SIZE 8

  typedef struct String
  {
    size_t length;
    size_t allocated_size;
    char *data;
  } String;

  String initEmptyString();
  String initString(char *src);

  void printString(String *dst);
  void appendCharsToString(String *dst, char *src);
  void appendStringToString(String *dst, String *src);

#define appendToString(dst, src) _Generic((src),                \
                                String *: appendStringToString, \
                                default:  appendCharsToString)(dst, src)

#define streq(dst, src) _Generic((src),                \
                                String *: equalsStringString,  \
                                default:  equalsStringChars)(dst, src)

  bool equalsStringChars(String *str1, char *str2);
  bool equalsStringString(String *str1, String *str2);

  //static void reallocString(String *dst, unsigned newSize);
  bool truncateString(String *dst, size_t size);
  void destroyString(String *dst);

#endif
