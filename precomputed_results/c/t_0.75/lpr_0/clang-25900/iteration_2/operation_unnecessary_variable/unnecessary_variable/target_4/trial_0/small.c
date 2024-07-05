#include <stdio.h>

int fn1(int p2) { return p2; }

struct m {
  signed int n : 18;
  signed int o : 1;
};

int r;
static int s = -5;
int t;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae;

  ae = ad.o;
  ad.o;

  r = t % (~s / ae);
  ad.o;

  return 0;
}
