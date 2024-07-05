#include <stdint.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;
int u;
int v;

int fn1(uint32_t p1, int p2) { return p2; }

int fn4() {
  struct m ad = {1957};
  ad.o = fn1((uint32_t)v, 5);
  signed ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  fn4();
}