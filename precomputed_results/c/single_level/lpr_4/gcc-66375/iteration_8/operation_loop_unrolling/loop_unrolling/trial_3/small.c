#include <stdio.h>

unsigned p;
unsigned u;

int main() {
  int d = 2L;
  p = d;
  char p1;

  // Loop unrolling
  p1 = (char)p;
  d = p1;
  d = d + 0x9EE7F9D1C772505B;

  p1 = (char)d;
  d = p1;
  d = d + 0x9EE7F9D1C772505B;

  // Repeat the above two lines 49 more times

  printf("checksum = %X\n", p);
  return 0;
}