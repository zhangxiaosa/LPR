#include <stdio.h>

unsigned int fn1(unsigned int p1, int p2) { return p2; }

struct m {
  signed int n : 18;
  signed int o : 1;
};

int main() {
  signed int s = -5L;

  struct m ad = {1957};
  ad.o = fn1(5, 5);
  signed int ae;

  ae = ad.o;
  ad.o = 5;
  int r = t % (~s / ae);
  ad.o;

  return 0;
}