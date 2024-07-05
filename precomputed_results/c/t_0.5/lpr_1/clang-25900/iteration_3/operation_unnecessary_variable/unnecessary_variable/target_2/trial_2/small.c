#include <stdio.h>

unsigned fn1(unsigned p1) {
  return p1;
}

static signed s = -5L;
unsigned t;
int u;

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  ad.o = fn1(5);
  signed ae;
  ae = ad.o;
  ad.o = u;

  // Optimized out: r = t % (~s / ae);
  ad.o;
}
