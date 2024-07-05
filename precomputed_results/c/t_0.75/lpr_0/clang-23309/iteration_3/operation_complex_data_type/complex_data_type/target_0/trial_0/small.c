#include <stdio.h>

short v;
short w;

int fn4(short p1, short p2) {
  return (int)p1;
}

int fn11(short p1, short p2, int p3) {
  int an;
  for (w = 3; w; w -= 1) {
    an = 250;
    if (an == w) {
      p3 = p2 || (an == 0x294A8563);
      short ao = 0xBCD1;
      if (ao - fn4(1 - an, 0xEC) - p3 & 1)
        v = 1;
    }
  }
  return 1;
}

int main() {
  int ag = 248;
  fn11(2, (short*)&ag, 0);
  printf("checksum = %hx\n", v);
  return 0;
}
