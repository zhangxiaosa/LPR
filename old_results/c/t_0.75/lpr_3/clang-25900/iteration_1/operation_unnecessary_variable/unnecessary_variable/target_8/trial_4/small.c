#include <stdio.h>

unsigned fn1() {
  return 5;
}

struct m {
  int n : 18;
  int o : 1;
};

unsigned t;

int fn2(struct m p2) {
  struct m ad = {1957};
  ad.o = fn1();
  int ae;
  ae = ad.o;
  ad.o = 5;
  t % (~(-5L) / ae);
}

int main() {
  struct m z;
  fn2(z);
}