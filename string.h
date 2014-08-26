#include "system.h"

#ifndef STRING_H
#define STRING_H

#define STRING_INIT_ALLOC_SIZE 8

  typedef struct String
  {
    unsigned length;
    unsigned allocated_size;
    bool allocated;
    char *data;
  } String;

  String initEmptyString();
  String initString(char *src);

  void printString(String *dst);
  bool appendCharsToString(String *dst, char *src);
  bool appendStringToString(String *dst, String *src);

#define appendToString(dst, src) _Generic((src),                \
                                String *: appendStringToString, \
                                default:  appendCharsToString)(dst, src)

#define streq(dst, src) _Generic((src),                \
                                String *: equalsStringString,  \
                                default:  equalsStringChars)(dst, src)

  bool equalsStringChars(String *str1, char *str2);
  bool equalsStringString(String *str1, String *str2);

  //static void reallocString(String *dst, unsigned newSize);
  bool truncateString(String *dst, unsigned size);
  void destroyString(String *dst);

#endif
