#include <stdio.h>

short v;
short w;

short fn4(short p1) { return p1; }

short fn11(int p3) {
  int an;

  for (w = 3; w; w -= 1) {
    if ((an = 250) == 0x294A85636008822LL) {
      if (0xBCD1 - fn4(-1, 0xEC) - p3 & 1)
        v = 1;
    }
  }

  return 1;
}

int main() {
  short ag = 248;
  fn11(0);
  printf("checksum = %X\n", v);
  return 0;
}