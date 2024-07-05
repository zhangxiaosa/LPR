#include <stdio.h>

int main() {
  int r = 0;

  /* Unrolled Loop 10 times */
  while (r > 1L) {
    r -= 1;
    r -= 1;
    r -= 1;
    r -= 1;
    r -= 1;
    r -= 1;
    r -= 1;
    r -= 1;
    r -= 1;
    r -= 1;
  }

  printf("checksum = %X\n", r);
  return 0;
}
