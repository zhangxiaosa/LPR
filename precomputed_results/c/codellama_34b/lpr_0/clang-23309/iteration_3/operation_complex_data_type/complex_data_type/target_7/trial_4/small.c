
#include <stdio.h>

unsigned fn6(unsigned p1, unsigned p2) {
  return abs(p1) - abs(p2);
}

int main() {
  unsigned p = fn6(7L, 7L);
  printf("checksum = %X\n", p);
  return 0;
}
