#include <stdio.h>

unsigned fn1(unsigned p1, unsigned p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned r;
static signed s;
unsigned t;
unsigned v;

int main() {
  struct m ad;
  ad.n = 1957;
  ad.o = fn1(v, 5);

  signed ae;
  ae = ad.o;
  ad.o = ad.o;

  r = t % (~s / ae);
  ad.o;

  return 0;
}