#include <stdint.h>

typedef signed a;
a g;

int main() {
  int32_t j = 0x24F96B7BL;
  unsigned k;

  for (; j; --j)
    ;

  int32_t l = 1L;
  int32_t m = j;
  a n = g;
  int32_t o = n;

  k >>= 1;
  k <<= j;

  if (o) {
    k <<= j;
  }
}
