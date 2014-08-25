#include "string.h"

String initEmptyString() {
  String str = {
    .length  = 0,
    .allocated_size = STRING_INIT_ALLOC_SIZE,
    .data    = calloc(STRING_INIT_ALLOC_SIZE, sizeof(char))
  };

  str.data ? str.allocated = true : printf("ERROR\n");
  return str;
}

String initString(char *src);

// TODO: Function definitions
