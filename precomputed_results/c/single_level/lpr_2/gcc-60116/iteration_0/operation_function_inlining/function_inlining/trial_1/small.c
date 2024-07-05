#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef char d;
typedef unsigned e;
typedef unsigned f;
typedef long long g;
int printf(const char *, ...);

a inline_fn2(a p1, a p2) {
  return p1 && p2 ? p1 : p1 % p2;
}
c inline_fn3(c p1, c p2) {
  return p2;
}
d inline_fn4(d p1, d p2) {
  return p1;
}
d inline_fn5(d p1, int p2) {
  return p2;
}
e inline_fn6(e p1, e p2) {
  return p2;
}
e inline_fn7(e p1, e p2) {
  return p1;
}
g inline_fn8(g p1, g p2) {
  return p1 + p2;
}

int main() {
  int av = 0;
  d as = 4UL;
  a at = 1L;
  b au[5][2][10];
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
f q;
b v;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (inline_fn7(as, inline_fn6(aq, inline_fn5(ai, (au[4][1][5] = inline_fn8(~inline_fn4(inline_fn3(aj, inline_fn2(ap, at)) != 0, an), ak) && 0x57L)))) > 2) {
        v = am;
        ag[3] = au[4][1][5];
      } else {
        ao = au[4][1][5];
      }
      return al;
    }
  }

  printf("checksum = %X\n", q);
  return 0;
}