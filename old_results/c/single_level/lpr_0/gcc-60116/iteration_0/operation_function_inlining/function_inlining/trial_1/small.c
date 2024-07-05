#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef char d;
typedef unsigned e;
typedef unsigned f;
typedef long long g;

a q;
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

d fn4(d p1, d p2) { return p1; }

e fn6(e p1, e p2) { return p2; }

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

void fn9(p1) { q = p1; }

void fn11(g p1, char *p2, int p3) {
  fn9(p1);
}

c fn12() {
  d as = 4UL;
  a at = 1L;
  b au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn6(aq, 0))) {
        v = am;
        ag[3] = 0;
      } else
        ao = 0;
      return al;
  }
}

int main() {
  int av = 0;
  fn12();
  {
    g p1 = v;
    char *p2 = "g_3";
    int p3 = av;
    fn9(p1);
  };
  printf("checksum = %X\n", q);
  return 0;
}