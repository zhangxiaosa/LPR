#include <stdio.h>

int fn4(int p1) {
  return p1;
}

int main() {
  int v;
  short ac = 1;
  int an = 250;
  int t;
  int w = 3;

  w -= 1;

  if (an == 250) {
    t = ac || (an = w) == 0x294A85636008822LL;
    if (0xBCD1LL - fn4(1 - an) - t & 1UL)
      v = 1;
  }

  int p = v;

  printf("checksum = %x\n", p);

  return 0;
}