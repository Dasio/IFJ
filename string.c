#include "string.h"

String initEmptyString() {
  String str = {
    .length  = 0,
    .allocated_size = STRING_INIT_ALLOC_SIZE,
    .data    = calloc(STRING_INIT_ALLOC_SIZE, sizeof(char))
  };

  str.data ? str.allocated = true : fprintf(stderr, "ERROR\n");
  return str;
}

String initString(char *src) {
  assert(src);

  String str = initEmptyString(&str);
  appendToString(&str, src);
  return str;
}

bool appendToString(String *dst, char *src) {
  assert(dst);
  assert(src);
  // FIXME : Dummy
  return true;
}

void printString(String *dst) {
  assert(dst);
  if(dst->length > 0)
    printf("%s\n", dst->data);
}

// TODO: Function definitions
