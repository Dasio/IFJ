#include "system.h"

int RandInt(int low, int high) {
  return low + rand() % (high - low + 1);
}
