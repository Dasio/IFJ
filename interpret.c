#include "system.h"
#include "dummy.h"
#include "string.h"

int main() {
  printf("%d\n", test());

  String str = initString("Ahoj");
  printString(&str);

  return 0;
}
