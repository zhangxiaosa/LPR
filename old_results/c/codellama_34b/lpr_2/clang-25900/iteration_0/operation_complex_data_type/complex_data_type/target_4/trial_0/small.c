
#include <stdio.h>

typedef unsigned int g;

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int t_n;
int t_o;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = t_n;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }
