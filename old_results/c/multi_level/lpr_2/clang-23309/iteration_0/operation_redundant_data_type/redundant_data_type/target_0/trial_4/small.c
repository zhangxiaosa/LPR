#include<stdio.h>

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
short w;
unsigned ab;
short ac = 1L;

b fn13() {
  short ae = 1UL;
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      t = fn5(ab, ac) || ((an = w) == 0x294A85636008822DL);
      short ao = 0xBCD1L;
      if ((ao - (fn6(am, an) - 0xECL)) - t & 1)
        v = 1;
    }
  return ae;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
