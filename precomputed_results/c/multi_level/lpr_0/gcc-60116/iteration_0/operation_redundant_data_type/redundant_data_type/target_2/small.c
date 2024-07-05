#include <stdio.h>

typedef char d;
typedef unsigned e;
typedef unsigned f;
typedef long long g;

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
d fn4(d p1, d p2) { return p1; }
e fn6(e p1, e p2) { return p2; }
e fn7(e p1, e p2) { return p1; }
long long fn8(long long p1, long long p2) { return p1 + p2; }

int v;
f w = 0xDC6F3D13L;
g ag[4];
short ah;
long ak;
f al;
unsigned am = 0x41AEA787L;
d an;
int ao;
unsigned ap;
unsigned aq;

long fn12() {
  d as = 4UL;
  short at = 1L;
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(as, fn6(aq, au[4][1][5] =
                               fn8(~fn4(fn3(ak, fn2(ap, at)) != 0, an), ak) &&
                               0x57L)) > 2)) {
        v = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}