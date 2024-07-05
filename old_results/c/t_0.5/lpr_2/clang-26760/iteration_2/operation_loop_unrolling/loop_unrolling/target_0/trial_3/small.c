#include <stdio.h>

int g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;

  if (j)
    --j;

  // Loop unrolling
  k = k >> 1;
  if (g) {
    k = k << j;
    k = k >> 1;
    if (g) {
      k = k << j;
      goto q;
    }
  }

  return 0;
}