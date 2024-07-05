#include <stdio.h>

typedef unsigned int uint;

long v;
short w;

uint fn6(uint p1, uint p2) {
  return p1 - p2;
}

int fn13() {
  uint an;
  for (w = 3; w; w -= 1)
    if (an = 250) {
      uint p2 = (v || (an = w) == 0x294A85636008822LL);
      short ao = 0xBCD1;
      if (((ao - (fn6(1L, an) - 0xEC)) - p2) & 1)
        v = 1;
    }
  return 0x2F2F6D26;
}

int main() {
  fn13();
  uint p = v;
  printf("checksum = %X\n", p);
  return 0;
}