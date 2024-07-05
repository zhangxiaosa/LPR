#include <stdio.h>

unsigned p;
unsigned u;

int main() {
  int d = 2L;
  p = d;
  d = (char)p;
  d = d + 0x9EE7F9D1C772505B;

  p = d;
  d = (char)p;
  d = d + 0x9EE7F9D1C772505B;

  p = d;
  d = (char)p;
  d = d + 0x9EE7F9D1C772505B;

  p = d;
  d = (char)p;
  d = d + 0x9EE7F9D1C772505B;

  // Continue unrolling the loop 47 more times

  printf("checksum = %X\n", p);
  return 0;
}