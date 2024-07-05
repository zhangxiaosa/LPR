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
  b an;

  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      t = 0xBCD1L || (an = w) == 0x294A85636008822DLL;

      if (fn2(0xBCD1L - fn4(1L - an, 0xECL), t) & 1UL)
        v = 1UL;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}