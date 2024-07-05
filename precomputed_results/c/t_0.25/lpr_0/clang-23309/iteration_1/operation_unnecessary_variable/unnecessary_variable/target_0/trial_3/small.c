#include <stdio.h>

unsigned p;
long v;
short ac = 1L;

int main() {
  int p2 = ac || 0;
  short ao = 0xBCD1L;
  if ((ao - (1L - 0)) - p2 & 1UL)
    v = 1UL;
  p = 0;
  printf("checksum = %X\n", p);
  return 0;
}