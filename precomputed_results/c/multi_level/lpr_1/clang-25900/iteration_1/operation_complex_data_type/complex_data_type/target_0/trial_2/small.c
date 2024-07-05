#include <stdint.h>

int r;
static signed s = -5L;
struct m {
  signed n;
  signed o;
};

int t;
int v;

int fn1(int p2) { return p2; }

int main() {
  struct m ad;
  ad.n = 1957;
  ad.o = fn1(5);
  signed ae = ad.o;
  ad.o = 0;
  r = t % (~s / ae);
  return 0;
}