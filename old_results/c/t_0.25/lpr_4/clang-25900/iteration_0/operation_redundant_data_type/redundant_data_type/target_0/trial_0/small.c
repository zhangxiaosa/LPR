#include <stdio.h>

typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

c r;
signed s = -5L;
g t;
c u;
g v;

d fn4() {
  struct {
    int n : 18;
    int o : 1;
  } ad = {1957};

  ad.o = fn1(v, 5);
  signed ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
}

int main() {
  fn4();
  return 0;
}