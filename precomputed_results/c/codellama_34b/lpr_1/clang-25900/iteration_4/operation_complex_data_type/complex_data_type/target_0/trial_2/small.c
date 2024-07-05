
#include <stdio.h>

int fn1(int p2) {
  return p2;
}

struct m {
  int n;
  int o;
};

int r;
static int s = -5;
int u;

int main() {
  struct m ad;
  ad.n = 1957;
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}
