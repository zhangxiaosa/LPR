#include <iostream>

unsigned t;
int r;
static signed s = -5L;
int u;
unsigned v;

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed ae;
  unsigned af = t; // Optimized to unsigned af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
