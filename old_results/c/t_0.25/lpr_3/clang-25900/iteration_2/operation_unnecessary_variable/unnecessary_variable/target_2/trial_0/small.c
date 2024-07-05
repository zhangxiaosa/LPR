#include <stdio.h>

unsigned fn1(p2) { return p2; }

int r;
static signed s = -5L;
unsigned t;

int main() {
  struct m {
    signed n : 18;
    signed o : 1;
  };
  struct m ad = {1957};
  ad.o = 5;
  r = t % (~s / ad.o);
  ad.o;
}
