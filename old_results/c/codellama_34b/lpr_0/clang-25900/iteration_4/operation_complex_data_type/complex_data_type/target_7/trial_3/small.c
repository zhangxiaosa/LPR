
#include <stdio.h>

int g(int p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
int t;

int main() {
  struct m ad = {1957};
  int p1 = 5;
  int p2 = 5;
  ad.o = g(p1, p2);
  r = t % (17 / ad.o);
}
