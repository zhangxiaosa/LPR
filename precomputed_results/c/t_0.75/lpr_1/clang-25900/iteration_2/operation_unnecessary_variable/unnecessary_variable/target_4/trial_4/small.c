#include <stdio.h>

unsigned fn1(unsigned p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

unsigned t;
int r;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (~(-5L) / ae);
  ad.o;
}