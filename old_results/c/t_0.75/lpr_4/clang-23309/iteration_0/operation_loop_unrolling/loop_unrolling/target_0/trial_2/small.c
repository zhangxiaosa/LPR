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
  c am1 = 1L;
  b an1;
  d ao1 = 0xBCD1L;
  if (an1 = 250UL) {
    t = ac || (an1 = w) == 0x294A85636008822DLL;
    if ((ao1 - fn4(am1 - an1, 0xECL)) - t & 1UL)
      v = 1UL;
  }

  c am2 = 1L;
  b an2;
  d ao2 = 0xBCD1L;
  if (an2 = 250UL) {
    t = ac || (an2 = w) == 0x294A85636008822DLL;
    if ((ao2 - fn4(am2 - an2, 0xECL)) - t & 1UL)
      v = 1UL;
  }

  c am3 = 1L;
  b an3;
  d ao3 = 0xBCD1L;
  if (an3 = 250UL) {
    t = ac || (an3 = w) == 0x294A85636008822DLL;
    if ((ao3 - fn4(am3 - an3, 0xECL)) - t & 1UL)
      v = 1UL;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}