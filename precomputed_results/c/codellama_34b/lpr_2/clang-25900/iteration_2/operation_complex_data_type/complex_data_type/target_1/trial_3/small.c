
#include <iostream>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  ae = ad.o;
  ad.o = 0;
  r = ae % (~s / ae);
  return ad.o;
}

int main() {
  int ae = 5;
  struct m ad = {1957};
  ad.o = ae;
  ad.o = 0;
  r = ae % (~s / ae);
  return ad.o;
}
