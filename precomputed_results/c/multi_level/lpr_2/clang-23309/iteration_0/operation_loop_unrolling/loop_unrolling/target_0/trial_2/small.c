#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef short e;
typedef unsigned f;

f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }

f p;
b t;
c v;
a w;
f ab;
a ac = 1L;

b fn13() {
  e ae = 1UL;
  c am = 1L;
  b an;

  // Loop unrolling with three iterations
  if (an = 250UL) {
    t = fn5(ab, ac) || (an = w) == 0x294A85636008822DL;
    a ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - t & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    t = fn5(ab, ac) || (an = w) == 0x294A85636008822DL;
    a ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - t & 1UL)
      v = 1UL;
  }

  if (an = 250UL) {
    t = fn5(ab, ac) || (an = w) == 0x294A85636008822DL;
    a ao = 0xBCD1L;
    if ((ao - (fn6(am, an) - 0xECL)) - t & 1UL)
      v = 1UL;
  }

  return ae;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}