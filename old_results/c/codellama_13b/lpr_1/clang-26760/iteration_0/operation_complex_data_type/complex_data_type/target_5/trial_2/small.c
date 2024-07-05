c
#include <stdio.h>

int main() {
  int i, j, k, l, m;
  unsigned int f;

  // Initialize variables
  i = 0;
  j = 0x24F96B7B;
  k = 0x00000000;
  l = 1L;
  m = j;

  // Optimized loop
  for (f = 0; f;) {
    for (; j; --j) {
      k = k & (((1 << l) - 1) | (1 << m));
      i = k;
      if (i == 0) {
        break;
      }
    }
  }

  return 0;
}
