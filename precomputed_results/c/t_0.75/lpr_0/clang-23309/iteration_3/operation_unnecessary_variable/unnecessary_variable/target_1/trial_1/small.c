#include <stdio.h>

short v;

short fn4(short p1, short p2) { return p1; }

short fn11(short p1, short p2, int p3) {
  if (250) {
    p3 = p2 || (0);
    short ao = 0xBCD1;
    if (ao - fn4(1 - 0, 0xEC) - p3 & 1)
      v = 1;
  }
  return 1;
}

int main() {
  fn11(2, 248, 0);
  printf("checksum = %hx\n", v);
  return 0;
}