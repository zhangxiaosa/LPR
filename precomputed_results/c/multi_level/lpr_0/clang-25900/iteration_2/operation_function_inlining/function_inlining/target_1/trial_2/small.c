#include <stdio.h>

int r;
static int s = -5L;
unsigned t;

unsigned fn1(int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = 5;
  int ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (~s / ae);
  return 0;
}