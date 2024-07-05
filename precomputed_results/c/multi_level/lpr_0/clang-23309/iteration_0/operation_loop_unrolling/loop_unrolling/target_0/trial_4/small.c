#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned f;

f fn6(f p1, f p2) { return p1 - p2; }

f p;
c v;
a w;
a ac = 1L;

b fn13() {
  b af = 0x2F2F6D26L;
  c am = 1L;
  b an;
  
  if (an = 250UL) {
    f p2 = ac || (an = 3) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    f p2 = ac || (an = 2) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    f p2 = ac || (an = 1) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  return af;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}