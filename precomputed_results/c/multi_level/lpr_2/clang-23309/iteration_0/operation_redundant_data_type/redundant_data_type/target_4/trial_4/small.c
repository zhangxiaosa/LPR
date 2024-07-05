#include <stdio.h>

unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;
int t;
unsigned v;
unsigned short w;
unsigned ab;
unsigned short ac = 1;

int fn13() {
  unsigned am = 1;
  unsigned int an;
  for (w = 3U; w; w -= 1) {
    if (an == 250U) {
      t = fn5(ab, ac) || (an = w) == 0x294A85636008822DUL;
      unsigned short ao = 0xBCD1;
      if ((ao - t) & 1U)
        v = 1U;
    }
  }
  return 1;
}

int main() {
  fn13();
  printf("checksum = %u\n", v);
  return 0;
}