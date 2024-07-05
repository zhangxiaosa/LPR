
#include <stdio.h>

struct m {
  int n : 18;
};

int r;
static int s = -5L;

int fn4_inlined(p1) {
  struct m ad = {1957};
  int ae = ad.n;
  ad.n = 0;
  int r_tmp = ae % (~s / ae);
  r = r_tmp;
  return ad.n;
}

int main() {
  fn4_inlined(5);
}
