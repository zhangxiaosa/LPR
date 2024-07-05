#include <stdio.h>

typedef int b;
typedef long c;
typedef unsigned char d;
typedef unsigned f;

b fn2(b p1, b p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }

unsigned p;
long v;
short w;
unsigned ab;
short ac = 1L;

int fn13() {
  int al = 3L;
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      ab = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(ao - fn4(fn6(am, an), 0xECL), ab) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}