#include <stdio.h>

int fn6(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int t;
  int v;
  short w;
  short ac_value = 1;

  for (w = 3; w; w -= 1) {
    bool an_is_250 = (w == 250);
    t = ac_value || an_is_250;
    short ao = 0xBCD1;
    if ((ao - (fn6(1, an_is_250) - 0xECL)) - t & 1)
      v = 1;
  }

  printf("checksum = %x\n", v);
  return 0;
}