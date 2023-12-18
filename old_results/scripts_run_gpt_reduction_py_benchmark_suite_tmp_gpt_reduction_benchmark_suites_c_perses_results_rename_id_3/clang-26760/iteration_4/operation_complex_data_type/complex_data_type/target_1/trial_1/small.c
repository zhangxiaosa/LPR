#include <stdio.h>

unsigned g;

int main() {
  unsigned j = 0x24F96B7BL;
  unsigned k = 0;  // Initialize k to 0

  while (j > 0) {
    k = k >> 1;
    --j;
  }

  printf("Optimized k: %u\n", k);

  return 0;
}
