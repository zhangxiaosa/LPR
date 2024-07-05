#include <stdio.h>

unsigned fn1(unsigned p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  unsigned t;
  int r;

  struct m ad = {1957};

  ad.o = fn1(5);

  int ae = ad.o;

  ad.o = 5;

  r = t % (5 / ae);

  return 0;
}