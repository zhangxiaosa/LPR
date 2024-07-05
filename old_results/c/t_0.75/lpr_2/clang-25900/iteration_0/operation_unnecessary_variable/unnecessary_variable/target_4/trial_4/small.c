#include <stdio.h>

unsigned fn1(unsigned p1) {
  return 0; // Optimized out p2
}

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = fn1(v);
  int ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}
