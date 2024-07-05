#include <stdio.h>

typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

e fn1(p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

c r;
static signed s = -5L;
g t;

d fn4() {
  struct m ad = {1957};
  signed n = ad.n;
  signed o = ad.o;

  o = fn1(5);
  signed ae = o;
  o = 0;

  r = t % (~s / ae);

  return n;
}

int main() {
  fn4();
}