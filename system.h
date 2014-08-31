#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

#ifndef SYSTEM_H
#define SYSTEM_H

  // TODO Makro na malloc test alebo memory management

  // typedefy

#define MALLOC_TEST(ptr) do {if(!ptr) {fprintf(stderr, "ERROR\n"); exit(1);}} while(0)

#endif
