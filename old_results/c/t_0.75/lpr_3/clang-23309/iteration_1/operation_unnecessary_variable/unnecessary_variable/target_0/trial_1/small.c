#include <stdio.h>

int fn4(unsigned char p1, unsigned p2) {
  return p1;
}

unsigned p;
int t;
long v;
short w;
short ac = 1L;

int main() {
  int an = 250UL;

  for (w = 3; w; w -= 1) {
    if (an) {
      t = ac;
      short ao = 0xBCD1L;
      if (ao - fn4(1L - 250UL, 0xECL) - t & 1UL)
        v = 1UL;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}