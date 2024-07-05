#include <stdio.h>

unsigned p;

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

int main() {
  unsigned p2 = 1;

  p = fn6(p, p2);
  printf("checksum = %X\n", p);

  return 0;
}