#include <stdio.h>

typedef int b;
typedef long c;
typedef unsigned char d_orig;
typedef unsigned f;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

c fn3(c p1, c p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

f p;
c v;
short w;
f ab;
short ac = 1L;

int main() {
  int ap = 0;
  unsigned char an;

  for (w = 3; w; w -= 1) {
    if (an = 250U) {
      ab = ac || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;

      if (fn2(fn3(ao, fn4(ao - an, 0xEC)), ab) & 1U) {
        v = 1UL;
      }
    }
  }

  p = v;
  fn1(p, ap);
  return 0;
}