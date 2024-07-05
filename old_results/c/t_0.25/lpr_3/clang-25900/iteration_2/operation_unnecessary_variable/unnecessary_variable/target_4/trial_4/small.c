#include <stdio.h>

unsigned fn1(p2) { return p2; }

int r;
static signed s = -5L;

int main() {
  struct m {
    signed n : 18;
    signed o : 1;
  };
  struct m ad = {1957};
  ad.o = fn1(5);
  signed ae;
  ae = ad.o;
  ad.o = 5;
  r = 0 % (~(-5L) / 5);
  ad.o;
}