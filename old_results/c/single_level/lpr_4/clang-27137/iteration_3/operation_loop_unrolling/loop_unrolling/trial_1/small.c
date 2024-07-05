#include <stdio.h>

unsigned h;
short o;

int main() {
  short q = o;

  // Unroll the loop - 6 iterations
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;

  h = q;

  printf("checksum = %X\n", h);
  return 0;
}
