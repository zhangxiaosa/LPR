
#include <stdio.h>

int main() {
  int n;
  int i;
  int j = 0x24F96B7BL;
  int k;

  // Initialize k to 1
  k = 1;

  // Perform bitwise operations on n
  for (i = 0; i < 32; i++) {
    if (j & (1 << i)) {
      k = k << (i + 1);
    }
  }

  // Print the result
  printf("%d\n", k);

  return 0;
}
