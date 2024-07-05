
#include <stdint.h>
#include <stdio.h>

typedef unsigned g;
struct m {
  int n : 18;
  int o : 1;
};
static int s = -5L;
g t;
g u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  g af = t;
  ae = ad.o;
  ad.o = u;
  return ad.o;
}

int main() {
  fn4_inlined(5);
  return 0;
}
