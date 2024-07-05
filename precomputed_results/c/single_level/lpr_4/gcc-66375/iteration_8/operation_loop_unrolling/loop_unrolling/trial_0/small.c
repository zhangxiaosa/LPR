#include <stdio.h>

unsigned p;
unsigned u;

int main() {
  int d = 2L;

  // Loop unrolling
  p = d;
  char p1 = p;
  d = p1;
  d = d + 0x9EE7F9D1C772505B;

  p = d;
  p1 = p;
  d = p1;
  d = d + 0x9EE7F9D1C772505B;

  p = d;
  p1 = p;
  d = p1;
  d = d + 0x9EE7F9D1C772505B;

  p = d;
  p1 = p;
  d = p1;
  d = d + 0x9EE7F9D1C772505B;

  // End of loop unrolling

  printf("checksum = %X\n", p);
  return 0;
}