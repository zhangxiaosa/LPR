
#include <stdio.h>

int fn1(int p2) {
  return p2;
}

struct m {
  int n : 18;
};

int r;
static int s = -5;
int u;

int main() {
  struct m ad = {1957};
  ad.n = fn1(5);
  int ae = ad.n;
  ad.n = u;
  r = ad.n % (~s / ae);
}
