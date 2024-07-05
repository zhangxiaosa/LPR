
#include <stdio.h>

typedef unsigned d;

unsigned fn6(unsigned p1, unsigned p2) {
  return p2 - p1;
}

unsigned p;
unsigned v;
short w = 3;

int fn13() {
  int an = 250UL;
  if (7L || (an = w)) {
    short ao = 48873;
    if (fn3(ao, fn6(1L, an)) - 7L & 1UL)
      v = 1UL;
  }
  return 2UL;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
