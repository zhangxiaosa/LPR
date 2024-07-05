
#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;

int fn4_inlined(int p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae = ad.o;
  ad.o = 0;
  r = ae % (~s / ae);
  return ad.o;
}

int main() {
  fn4_inlined(5);
  return 0;
}
