#include <stdio.h>

struct m {
  int o : 1;
};

int r;
static int s = -5L;

unsigned fn1(unsigned p1, int p2) { return p2; }

int main() {
  struct m ad;

  ad.o = fn1(0, 5);
  int ae;
  ae = ad.o;
  ad.o = ad.o;
  r = r % (~s / ae);
  ad.o;

  return 0;
}