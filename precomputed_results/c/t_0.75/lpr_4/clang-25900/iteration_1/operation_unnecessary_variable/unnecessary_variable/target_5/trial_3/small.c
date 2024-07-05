#include <stdio.h>

unsigned fn1(int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  ad.o = 5;
  r = t % (5 / ad.o);
  ad.o;
}
