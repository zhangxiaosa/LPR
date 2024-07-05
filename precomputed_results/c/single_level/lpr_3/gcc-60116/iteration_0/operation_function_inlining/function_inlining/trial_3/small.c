#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef char d;
typedef unsigned e;
typedef unsigned f;
typedef long long g;

a fn2(a p1, a p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

c fn3(c p1, c p2) {
  return p2;
}

d fn4(d p1, d p2) {
  return p1;
}

d fn5(d p1, int p2) {
  return p2;
}
e fn6(e p1, e p2) {
  return p2;
}
e fn7(e p1, e p2) {
  return p1;
}
g fn8(g p1, g p2) {
  return p1 + p2;
}

int printf(const char* format, ...);

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

int main() {
  int av = 0;

  d as = 4UL;
  a at = 1L;
  b au[5][2][10];
  g ak;
  f al;
  b am = 0x41AEA787L;
  d an;
  b ao;
  f ap;
  b aq;
	down:
  f q;

  g ag[4];
  b v;
  f w = 0xDC6F3D13L;
  c aj;
  d ai;
  a ah;

  for (ak = 0;;) {
    a ah;
    d an;
    b ao;
    f ap;
    c aj;

    if (w >= (fn7(as, fn6(aq,
        fn5(ai, au[4][1][5] = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak)) && 0x57L))) {
      v = am;
      ag[3] = au[4][1][5];
    } else {
      ao = au[4][1][5];
    }

    return al;
  }

  fn11(v, "g_3", av);
  fn1(q, av);
  return 0;
}
