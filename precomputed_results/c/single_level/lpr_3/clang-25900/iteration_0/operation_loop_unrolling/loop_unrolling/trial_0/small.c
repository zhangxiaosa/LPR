#include <stdio.h>

typedef signed a;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

struct m {
  signed n : 18;
  signed o : 1;
};

c r;
static a s = -5L;
g t;
c u;
g v;

e fn1(e p1, int p2) {
  return p2;
}

d fn4() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  a ae;
  c af = t;
  ae = ad.o;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  fn4();
  return 0;
}