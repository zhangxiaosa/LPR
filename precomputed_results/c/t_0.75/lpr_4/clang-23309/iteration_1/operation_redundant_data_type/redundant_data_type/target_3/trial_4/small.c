#include <stdio.h>

short fn4(short p1, short p2) {
  return p1;
}

int main() {
  short t;
  long v;
  short w;
  short ac = 1L;

  for (w = 3; w; w -= 1) {
    int an;
    if (an = 250UL) {
      t = ac || (an = w) == 0x294A85636008822LL;
      short ao = 0xBCD1;
      if ((ao - fn4(1L - an, 0xEC)) - t & 1UL)
        v = 1UL;
    }
  }

  printf("checksum = %hx\n", v);
  return 0;
}