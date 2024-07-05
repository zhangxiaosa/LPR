
#include <stdio.h>

int fn6(unsigned p1, unsigned p2) {
  return p2 - p1;
}

int main() {
  unsigned p = fn6(1L, 248L);
  printf("checksum = %X\n", p);
  return 0;
}
