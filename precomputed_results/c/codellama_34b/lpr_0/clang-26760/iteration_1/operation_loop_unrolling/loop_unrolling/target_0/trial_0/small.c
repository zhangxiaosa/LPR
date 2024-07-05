
#include <iostream>

unsigned f;
int g;

int main() {
  int i;
  unsigned j = 0x24F96B7BL;
  unsigned k;

  // Loop unrolling
  for (f = 0; f;) {
    for (; j; --j) {
      // Unroll the inner loop
      for (int i = 0; i < 10; i++) {
        k = k << j;
      }
    }
  }

  int n = g;
  while (n) {
    k = k >> 1L;
    i = n;
    if (i)
      k = k << j;
  }
}
