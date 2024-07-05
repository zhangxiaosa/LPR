#include <stdio.h>

typedef signed a;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;

int fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

void fn4() {
  struct m ad = {1957};
  ad.o = fn1((unsigned)v, 5);
  signed ae;
  int af = t;
  ae = (signed)ad.o;
  (signed)ad.o = u;
  r = af % (~(signed)s / ae);
}

void main() {
  fn4();
}
