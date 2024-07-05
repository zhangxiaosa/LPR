#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef char d;
typedef unsigned f;
d fn4(d p1, d p2) {
  return p1;
}

f p;
b t;
c v;
a w;
a ac = 1L;

b fn13() {
  b al = 3L;
  c am = 1L;
  b an;

  // Unrolled loop iteration 1
  w = 3;
  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - fn4(am - an, 0xECL)) - t & 1UL)
      v = 1UL;
  }

  // Unrolled loop iteration 2
  w = 2;
  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - fn4(am - an, 0xECL)) - t & 1UL)
      v = 1UL;
  }

  // Unrolled loop iteration 3
  w = 1;
  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - fn4(am - an, 0xECL)) - t & 1UL)
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