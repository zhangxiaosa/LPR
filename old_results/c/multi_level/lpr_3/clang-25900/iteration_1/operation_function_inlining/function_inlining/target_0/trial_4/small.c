#include<stdio.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;
int u;

// Inlined function fn1
static inline unsigned fn1() {
  return 5;
}

int main() {
  struct m ad = {1957};
  ad.o = 5;
  ad.o = u;
  r = t % (~s / fn1());
}
