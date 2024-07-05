#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;

unsigned fn1(unsigned p1) { return 5; }

int main() {
  struct m ad = {1957};

  ad.o = fn1(0);
  int ae;
  ae = ad.o;
  ad.o = ad.o;
  r = r % (~s / ae);
  ad.o;

  return 0;
}