#include <stdio.h>

unsigned fn1(unsigned p1) {
  return 0;  // Optimize out p2 by returning a constant value
}

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(v);
  signed ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
