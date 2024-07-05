#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef char d;
typedef unsigned e;
typedef unsigned f;
typedef long long g;

a fn2(a p1, a p2) { return p1 && p2 ? p1 : p1 % p2; }

c fn3(c p1, c p2) { return p2; }

d fn4(d p1, d p2) { return p1; }

d fn5(d p1, int p2) { return p2; }

g fn8(g p1, g p2) { return p1 + p2; }

e q;
b v;
f w = 0xDC6F3D13L;
g ag[4];
a ah;
d ai;
c aj;
g ak;
f al;
b am = 0x41AEA787L;
d an;
b ao;
f ap;
b aq;

c main() {
  int av = 0;

  d as = 4UL;
  a at = 1L;
  b au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (as, au[4][1][5] = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) &&
                                 0x57L) > 2) {
        v = 0x41AEA787L;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    break;
  }

  q = v;
  printf("checksum = %X\n", q);
  return 0;
}