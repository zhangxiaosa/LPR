
#include <iostream>

int fn1(int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  r = ad.o % (~s / 5);
}
