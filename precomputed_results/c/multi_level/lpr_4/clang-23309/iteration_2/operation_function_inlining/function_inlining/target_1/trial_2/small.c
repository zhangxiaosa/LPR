#include <stdio.h>

int main() {
  int t;
  long v;
  short w;
  short ac = 1;

  int an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = ac || (an = w) == 0x294A85636008822D || (1 - an) == 0xEC;
    short ao = 0xBCD1;
    if ((ao - (1 - an)) - t & 1)
      v = 1;
  }
  int p = v;
  printf("checksum = %X\n", p);
  return 0;
}