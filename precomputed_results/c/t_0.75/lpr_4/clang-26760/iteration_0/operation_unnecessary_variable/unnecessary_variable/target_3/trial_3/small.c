#include <stdint.h>

typedef signed a;
a g;

int main() {
  a i;
  unsigned k = 0x24F96B7BUL;
  int32_t j = 0x24F96B7BL;
  int32_t l = 1L;
  int32_t m = j;
  a n = g;
  int32_t o = n;

  k = k >> l;
  i = o;
  if (o) {
    goto q;
  }

q:;
}