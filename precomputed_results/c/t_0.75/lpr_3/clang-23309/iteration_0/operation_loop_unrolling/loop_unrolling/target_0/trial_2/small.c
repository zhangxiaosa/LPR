#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef unsigned f;

b fn2(b p1, b p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }

f p;
b t;
c v;
a w;
a ac = 1L;

int main() {
  c am = 1L;
  b an;

  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(ao - fn4(am - an, 0xECL), t) & 1UL)
      v = 1UL;
  }
  w -= 1;

  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(ao - fn4(am - an, 0xECL), t) & 1UL)
      v = 1UL;
  }
  w -= 1;

  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(ao - fn4(am - an, 0xECL), t) & 1UL)
      v = 1UL;
  }
  w -= 1;

  p = v;
  printf("checksum = %X\n", p);

  return 0;
}