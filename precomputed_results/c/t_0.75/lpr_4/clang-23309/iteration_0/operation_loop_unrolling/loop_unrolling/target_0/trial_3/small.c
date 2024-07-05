#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef char d;
typedef unsigned f;

// Function declaration
d fn4(d p1, d p2);

// Global variables
d p;
b t;
c v;
a w;
a ac = 1L;

int main() {
  // Iteration 1
  {
    w = 3;
    c am = 1L;
    b an;
    if (an = 250UL) {
      t = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if ((ao - fn4(am - an, 0xECL)) - t & 1UL)
        v = 1UL;
    }
  }

  // Iteration 2
  {
    w = 2;
    c am = 1L;
    b an;
    if (an = 250UL) {
      t = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if ((ao - fn4(am - an, 0xECL)) - t & 1UL)
        v = 1UL;
    }
  }

  // Iteration 3
  {
    w = 1;
    c am = 1L;
    b an;
    if (an = 250UL) {
      t = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if ((ao - fn4(am - an, 0xECL)) - t & 1UL)
        v = 1UL;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}