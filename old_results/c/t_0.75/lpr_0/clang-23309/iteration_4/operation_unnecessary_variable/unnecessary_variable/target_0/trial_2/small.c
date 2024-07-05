#include <stdio.h>

short v;

short fn11(short p1, int p3) {
  short ao = 0xBCD1;
  if (ao - 1 + 250 - p1 & 1)
    v = 1;
  return 1;
}

int main() {
  fn11(2, 0);
  printf("checksum = %hx\n", v);
  return 0;
}