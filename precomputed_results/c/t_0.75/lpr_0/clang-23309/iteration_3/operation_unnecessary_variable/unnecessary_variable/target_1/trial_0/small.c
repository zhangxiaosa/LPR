#include <stdio.h>

short v;

short fn4(short p1, short p2) { return p1; }

short fn11(short p1, short p2, int p3) {
  p3 = p2;
  short ao = 0xBCD1;
  if (ao + 249 - p3 & 1)
    v = 1;
  return 1;
}

int main() {
  fn11(2, 248, 0);
  printf("checksum = %hx\n", 1);
  return 0;
}