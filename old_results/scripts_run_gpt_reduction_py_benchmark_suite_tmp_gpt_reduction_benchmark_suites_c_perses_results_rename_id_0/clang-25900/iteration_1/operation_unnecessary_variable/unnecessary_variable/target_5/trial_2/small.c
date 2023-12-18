#include <stdio.h>

unsigned fn1(int p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

int main() {
  unsigned t;
  int r;

  static signed s = -5L;

  struct m ad = {1957};

  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = 0;

  r = t % (~(-5L) / ae);

  return 0;
}