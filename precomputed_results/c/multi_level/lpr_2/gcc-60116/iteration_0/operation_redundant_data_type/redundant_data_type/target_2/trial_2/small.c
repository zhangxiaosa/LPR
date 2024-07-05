#include <stdio.h>

typedef long long g;
typedef char d;
typedef unsigned e;
typedef unsigned f;

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }

g fn3(g p1, g p2) { return p2; }

d fn4(d p1, d p2) { return p1; }

e fn7(e p1, e p2) { return p1; }

f q;

int v;

f w = 0xDC6F3D13L;

g ag[4];

short ah;
g aj;
g ak;
d an;
e ao;
f ap;

int main() {
  d as = 4UL;
  short at = 1L;
  short au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(as, au[4][1][5] = ~fn4(fn3(aj, fn2(ap, at)) != 0, an) + ak &&
                                 0x57L) > 2)) {
        v = 0x41AEA787L;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    break;
  }
  q = v;
  printf("checksum = %llX\n", q);
  return 0;
}