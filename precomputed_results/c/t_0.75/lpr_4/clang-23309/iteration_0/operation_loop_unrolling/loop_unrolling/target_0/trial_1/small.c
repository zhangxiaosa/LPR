#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef char d;
typedef unsigned f;

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
    t = ac || (an = 3) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - fn4(am - an, 0xECL)) - t & 1UL)
      v = 1UL;
  }

  c am1 = 1L;
  b an1;
  if (an1 = 250UL) {
    t = ac || (an1 = 2) == 0x294A85636008822DLL;
    a ao1 = 0xBCD1L;
    if ((ao1 - fn4(am1 - an1, 0xECL)) - t & 1UL)
      v = 1UL;
  }

  c am2 = 1L;
  b an2;
  if (an2 = 250UL) {
    t = ac || (an2 = 1) == 0x294A85636008822DLL;
    a ao2 = 0xBCD1L;
    if ((ao2 - fn4(am2 - an2, 0xECL)) - t & 1UL)
      v = 1UL;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}