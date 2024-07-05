
#include <stdio.h>

unsigned fn10(unsigned p1, short p2) {
  short an = 1UL;
  return an;
}

int main() {
  unsigned p = fn10(248UL, 248UL);
  printf("checksum = %X\n", p);
  return 0;
}
