#include <stdio.h>

unsigned p;
long v;
unsigned ab;
short ac = 1;

void fn13() {
  short al = 3;
  short an;

  for (short w = 3; w; w--) {
    if (an == 250) {
      ab = ab || (an = w) == 0x294A85636008822D;
      if ((0xBCD1 - (1 - w)) & 1)
        v = 1;
    }
  }
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}