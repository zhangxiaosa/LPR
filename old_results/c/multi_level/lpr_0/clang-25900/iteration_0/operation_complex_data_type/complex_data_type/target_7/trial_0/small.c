#include <stdio.h>

int r;
static int s = -5L;
unsigned int t;
int u;
unsigned int v;

unsigned int fn1(unsigned int p1, int p2) { return p2; }

struct m {
  int n_bits_18;
  int o_bits_1;
};

int fn4() {
  struct m ad = {1957};
  ad.o_bits_1 = fn1(v, 5);
  int ae;
  int af = t;
  ae = ad.o_bits_1;
  ad.o_bits_1 = u;
  r = af % (~s / ae);
  ad.o_bits_1;
}

int main() { fn4(); }
