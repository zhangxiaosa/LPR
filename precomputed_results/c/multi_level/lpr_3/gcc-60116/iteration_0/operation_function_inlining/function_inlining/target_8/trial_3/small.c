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

e fn7(e p1, e p2) { return p1; }

g fn8(g p1, g p2) { return p1 + p2; }

f q;
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

c fn12() {
  d as = 4UL;
  a at = 1L;
  b au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= aq) {
        v = am;
        ag[3] = au[4][1][5];
      } else {
        ao = au[4][1][5];
      }
    }
    return al;
  }
}

int main() {
  int av = 0;
  fn12();
  q = v;
  printf("checksum = %X\n", q);
  return 0;
}
