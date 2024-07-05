#include<stdio.h>

unsigned fn1(p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

unsigned r;
static signed s = -5L;

int main() {
  struct m ad = {1957, fn1(5)};
  ad.o = ad.o;
  r = 4 % (~s / ad.o);
  ad.o;
}