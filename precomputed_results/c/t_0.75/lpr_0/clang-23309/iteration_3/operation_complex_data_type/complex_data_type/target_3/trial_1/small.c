#include <stdio.h>

short v;
short w;

short fn4(short p1, short p2) {
  return p1;
}

short fn11(short p1, short p2, short p3) {
  for (w = 3; w; w -= 1) {
    if (p2 || (w == 0x8822)) {
      short ao = 0xBCD1;
      if ((ao - fn4(1 - w, 0xEC) - p3) & 1) {
        v = 1;
      }
    }
  }
  return 1;
}

int main() {
  short ag = 248;
  fn11(2, ag, 0);
  printf("checksum = %hx\n", v);
  return 0;
}