#include <stdio.h>

unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;

int main() {
  struct m ad = {1957};
  ad.o = fn1(0, 5); // Replace v with 0
  signed ae;
  ae = ad.o;
  r = t % (~s / ae);
  // ad.o; // Remove unused expression
}