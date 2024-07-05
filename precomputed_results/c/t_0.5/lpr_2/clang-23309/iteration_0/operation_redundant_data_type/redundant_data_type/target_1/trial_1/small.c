#include <stdio.h>

short fn2(short p1, short p2) { return p1 - p2; }

short fn4(short p1, short p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

short p;
long v;
short w;
short ab;
short ac = 1;

short fn13() {
  short al = 3;
  long am = 1;
  short an;
  for (w = 3; w; w -= 1)
    if (an = 250) {
      ab = fn5(ab, ac) || (an = w) == 0x294A85636008822L;
      short ao = 0xBCD1;
      if (fn2(ao - fn4(fn6(am, an), 0xEC), ab) & 1)
        v = 1;
    }
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}