#include <stdio.h>

int main() {
  short q;
  q = 0;
  int s = 1L;

  // Unrolled loop iterations
  q -= 6;

  printf("checksum = %X\n", q);
  return 0;
}