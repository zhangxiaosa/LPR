
#include <stdio.h>

typedef unsigned int g;

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
unsigned int t;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }

// Decomposition of `fn4_inlined`

int fn4_inlined(p1) {
  int t_temp = t;
  int u_temp = u;
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = t_temp;
  ae = ad.o;
  ad.o = u_temp;
  r = af % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }
