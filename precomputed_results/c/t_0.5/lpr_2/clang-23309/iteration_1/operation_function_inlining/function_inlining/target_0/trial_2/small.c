#include <stdio.h>

short fn2(short p1, short p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned v;
short w;
unsigned ab;
short ac = 1;

short fn13() {
  short an;
  for (w = 3; w; w -= 1)
    if (an = 250) {
      ab = ac || (an = w) == 0x294A85636008822D;
      short ao = 0xBCD1;
      if (((ao - (1 - an)) - ab) & 1)
        v = 1;
    }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
