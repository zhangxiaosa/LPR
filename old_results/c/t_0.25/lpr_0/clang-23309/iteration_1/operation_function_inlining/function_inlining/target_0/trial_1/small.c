#include <stdio.h>

unsigned p;
long v;

short fn12(int p1, int p2, char p3, short p4, unsigned p5) {
  v = 1UL;
  return 3L;
}

int main() {
  p = 0x2F2F6D26L;
  printf("checksum = %X\n", p);
  return 0;
}