#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef unsigned f;

b fn4(d p1, d p2) { return p1; }

f p;
b t;
c v;
a w;
a ac = 1L;

int main() {
  b an;

  // Unrolled loop iteration 1: w = 3
  if (an = 250UL) {
    t = ac || (an = 3) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (ao - fn4(1L - an, 0xECL) - t & 1UL)
      v = 1UL;
  }

  // Unrolled loop iteration 2: w = 2
  if (an = 250UL) {
    t = ac || (an = 2) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (ao - fn4(1L - an, 0xECL) - t & 1UL)
      v = 1UL;
  }

  // Unrolled loop iteration 3: w = 1
  if (an = 250UL) {
    t = ac || (an = 1) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (ao - fn4(1L - an, 0xECL) - t & 1UL)
      v = 1UL;
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}