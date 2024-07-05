#include <stdio.h>

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned v;
short w;
short ac = 1;
int main() {
  long am = 1L;
  unsigned an = 250UL;

  for (w = 3; w; w -= 1) {
    unsigned p2 = ac;
    short ao = 0xBCD1L;

    if ((ao - (fn6(am, 250UL) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  printf("checksum = %X\n", v);
  return 0;
}