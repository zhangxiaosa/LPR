#include <stdio.h>

unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
int t;
unsigned ab;
short ac = 1;
int w;
typedef long c;
c v;

int fn13() {
  unsigned am = 1;
  unsigned an;
  for (w = 3; w; w -= 1) {
    if (an == 250) {
      t = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
      short ao = 0xBCD1;
      if ((ao - (fn6(am, an) - 0xEC)) - t & 1)
        v = 1;
    }
  }
  return 1;
}

int main() {
  fn13();
  p = ab;
  printf("checksum = %X\n", p);
  return 0;
}
