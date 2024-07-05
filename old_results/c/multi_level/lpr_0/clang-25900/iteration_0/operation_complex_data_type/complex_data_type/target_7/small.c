#include <stdio.h>

int r;
static int s = -5L;
unsigned int t;
int u;

unsigned int fn1(unsigned int p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int fn4() {
  struct m ad = {1957};
  ad.o = fn1(5, 5);
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() { fn4(); }
