#include <stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned u;
unsigned v;

unsigned fn1(unsigned p1, int p2) { return p2; }

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed ae;
  ae = ad.o;
  ad.o = u;
  r = 1957 % (~s / ae);
  ad.o;
}
