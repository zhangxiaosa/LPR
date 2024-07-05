#include <stdio.h>

int main() {
  short q = 0;
  int s = 1L;

  // Inlined while loops
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;

  // Inlined printf statement
  unsigned int checksum = q;
  printf("checksum = %X\n", checksum);
  return 0;
}