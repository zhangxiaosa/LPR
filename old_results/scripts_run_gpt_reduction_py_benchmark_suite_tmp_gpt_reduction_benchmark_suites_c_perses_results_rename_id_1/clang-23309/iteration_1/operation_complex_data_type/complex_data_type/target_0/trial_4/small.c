#include <stdio.h>

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;
unsigned u;
long v;
short w;
short ac = 1;

int main() {
  unsigned an;

  for (w = 3; w; w -= 1) {
    an = 250;

    if (w == 0x294A85636008822D) {
      u = ac;
      short ao = 0xBCD1;

      if (((ao - (fn6(1, an) - 0xEC)) - u) & 1) {
        v = 1;
      }
    }
  }

  p = v;
  printf("checksum = %u\n", p);

  return 0;
}