#include "string.h"

String initEmptyString() {
  String str = {
    .length  = 0,
    .allocated_size = STRING_INIT_ALLOC_SIZE,
    .data    = calloc(STRING_INIT_ALLOC_SIZE, sizeof(char))
  };
  MALLOC_TEST(str.data);

  return str;
}

String initString(char *src) {
  assert(src);

  String str = initEmptyString();
  appendCharsToString(&str, src);
  return str;
}

void printString(String *dst) {
  assert(dst);
  if(dst->length > 0)
    printf("%s\n", dst->data);
}

bool appendCharsToString(String *dst, char *src) {
  assert(dst);
  assert(src);
  // FIXME : Dummy
  return true;
}

bool appendStringToString(String *dst, String *src) {
  assert(dst);
  assert(src);
  // FIXME : Dummy
  return true;
}

// Do not use! Use streq()
bool equalsStringChars(String *str1, char *str2) {
  assert(str1); assert(str2);
  return (strcmp(str1->data, str2) == 0);
}

// Do not use! Use streq()
bool equalsStringString(String *str1, String *str2) {
  assert(str1); assert(str2);
  return (strcmp(str1->data, str2->data) == 0);
}

// TODO: Function definitions
