
#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int g(int p2) { return p2; }

int main() {
  struct m ad = {1957};
  ad.o = g(5);
  int ae = ad.o;
  ad.o = 5;
  int t = 17 / ae;
  r = t % (17 / ae);
  ad.o;
}
