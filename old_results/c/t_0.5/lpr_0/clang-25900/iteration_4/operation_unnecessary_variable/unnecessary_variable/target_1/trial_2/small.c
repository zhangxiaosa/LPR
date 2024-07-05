#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;

unsigned fn1(unsigned p1, int p2) { return p2; }

int main() {
  struct m ad = {1957};

  ad.o = fn1(0, 5);
  r = r % (~s / ad.o);
  ad.o;

  return 0;
}