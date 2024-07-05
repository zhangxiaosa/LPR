#include <stdio.h>

int fn6(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int t;
  int v;
  short w;
  short ac_value = 1;
  int an;

  for (w = 3; w; w -= 1) {
    if ((an = 250)) {
      t = ac_value || (an = w) == 0x294A85636008822DL;
      if ((0xBCD1 - (fn6(1, an) - 0xECL)) - t & 1)
        v = 1;
    }
  }

  printf("checksum = %x\n", v);

  return 0;
}