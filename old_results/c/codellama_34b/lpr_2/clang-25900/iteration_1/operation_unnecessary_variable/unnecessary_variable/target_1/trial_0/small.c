
#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = u;
  ae = p1;
  ad.o = u;
  r = af % (~s / ae);
  return p1;
}

int main() { fn4_inlined(5); }
