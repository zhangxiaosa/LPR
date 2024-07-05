#include <stdio.h>

short v;

short fn11(short p1, int p3) {
  p3 = p1;
  short ao = 0xBCD1;
  if (ao + 249 & 1)
    v = 1;
  return 1;
}

int main() {
  fn11(2, 0);
  printf("checksum = %hx\n", v);
  return 0;
}