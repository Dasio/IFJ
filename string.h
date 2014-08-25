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
  bool appendToString(String *dst, char *src);
  bool truncateString(String *dst, unsigned size);

  bool stringeq(String *str1, String *str2);

  //static void reallocString(String *dst, unsigned newSize);

  void destroyString(String *dst);

#endif
