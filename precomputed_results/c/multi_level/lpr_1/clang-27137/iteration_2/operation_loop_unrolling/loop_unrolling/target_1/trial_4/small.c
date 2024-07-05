#include <stdio.h>

int main() {
  int i;
  short r = 0;

  for (i = 0; i < 10; i++) {
    r -= 1;
    while (r > 1L) {
      r -= 1;
      while (r > 1L) {
        r -= 1;
        while (r > 1L) {
          r -= 1;
          // ... Unroll the loop body further as needed ...
        }
      }
    }
  }

  printf("checksum = %X\n", r);
  return 0;
}