#include <stdio.h>

unsigned fn1(unsigned p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  signed ae;
  ae = ad.o;
  ad.o = 0;
  0; // r = t % (-6 / 5);
  ad.o;
}
