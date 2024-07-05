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

int main() {
  c am = 1L;
  b an;

  if ((an = 250UL) && (w == 3)) {
    f p2 = ac || (an = w) == 0x294A85636008822DLL;
    if ((ac - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  if ((an = 250UL) && (w == 2)) {
    f p2 = ac || (an = w) == 0x294A85636008822DLL;
    if ((ac - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  if ((an = 250UL) && (w == 1)) {
    f p2 = ac || (an = w) == 0x294A85636008822DLL;
    if ((ac - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  printf("checksum = %X\n", v);
  return 0;
}