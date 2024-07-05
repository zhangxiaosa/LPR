#include <stdio.h>

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned v;
short w;
unsigned ab;
short ac = 1;

int main() {
  short an;
  for (w = 3; w; w -= 1) {
    if ((an = 250)) {
      ab = ac || (an = w) == 0x294A85636008822D;
      unsigned ao = 0xBCD1;
      if (((ao - (fn6(1, an) - 0xEC)) & 1))
        v = 1;
    }
  }
  printf("checksum = %X\n", v);
  return 0;
}