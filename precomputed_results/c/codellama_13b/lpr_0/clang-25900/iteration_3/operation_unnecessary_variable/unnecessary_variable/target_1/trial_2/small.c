
#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int fn1(int p2) { return p2; }

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int u = ad.o;
  ad.o = u;
  unsigned r = 5 / u;
  ad.o;

  return 0;
}
