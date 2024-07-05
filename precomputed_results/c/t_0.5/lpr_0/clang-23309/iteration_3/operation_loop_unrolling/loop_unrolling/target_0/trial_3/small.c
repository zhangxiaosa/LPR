#include <stdio.h>

char fn4(p1) { return p1; }

int p;
int t;
short w;
int ac = 1L;

int main() {
  int an;

  if (an = 250UL) {
    t = ac || (an = 3) == 0x294A85636008822D;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an)) - t & 1)
      p = 1UL;
  }

  if (an = 250UL) {
    t = ac || (an = 2) == 0x294A85636008822D;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an)) - t & 1)
      p = 1UL;
  }

  if (an = 250UL) {
    t = ac || (an = 1) == 0x294A85636008822D;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an)) - t & 1)
      p = 1UL;
  }

  printf("checksum = %d\n", p);
  return 0;
}