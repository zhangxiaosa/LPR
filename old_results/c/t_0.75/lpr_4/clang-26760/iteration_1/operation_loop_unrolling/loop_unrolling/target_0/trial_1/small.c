#include <stdint.h>

typedef signed a;
a g;

int main() {
  a i;
  int32_t j = 0x24F96B7BL;
  unsigned k;
  unsigned f;    // Unrolled loop variable

  // Unrolled loop
  for (f = j; f >= 4; f -= 4) {
    j -= 4;
    j -= 4;
    j -= 4;
    j -= 4;
  }

  // Handle remaining iterations
  while (j >= 1) {
    j--;
  }

  int32_t l = 1L;
  int32_t m = j;

q:
  k = k >> l;
  i = g;
  if (i) {
    k = k << m;
    goto q;
  }

  return 0;
}
