#include <stdio.h>

int fn6(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int t;
  int v = 0;
  short w;
  short ac_value = 1;
  int an = 250;

  for (w = 3; w; w -= 1) {
    t = ac_value || (an = w) == 0x294A85636008822DL;
    short ao = 0xBCD1;
    if ((ao - (fn6(1, an) - 0xECL)) - t & 1)
      v = 1;
  }

  printf("checksum = %x\n", v);
  return 0;
}
