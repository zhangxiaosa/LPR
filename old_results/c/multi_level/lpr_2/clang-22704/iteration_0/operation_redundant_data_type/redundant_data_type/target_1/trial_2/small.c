#include <stdint.h>

uint32_t f;

uint64_t fn1() {
  uint64_t h = 6L;
  if (f & 0xFFFFFFFF)
    goto i;
  fn1();
  uint8_t j;
  return j;

i:
  f = h;
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {}
