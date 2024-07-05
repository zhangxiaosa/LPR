#include <stdio.h>

unsigned p;
int main() {
  int d = 2L;

  // Unrolled loop
  p = d;
  char p1 = p;
  d = p1;
  d = d + 0x9EE7F9D1C772505B;

  p = d;
  p1 = p;
  d = p1;
  d = d + 0x9EE7F9D1C772505B;

  // Repeat the above two lines 49 more times for a total of 51 iterations
  // ...
  // ...
  // ...

  printf("checksum = %X\n", p);
  return 0;
}