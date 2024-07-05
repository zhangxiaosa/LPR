#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = 5; // Optimized: replaced fn1(v, 5) with 5
  int af = t;
  signed ae;
  ae = ad.o; // Optimized: replaced ae with ad.o
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
