
#include <stdio.h>
#include <stdint.h>

typedef int16_t c;
typedef uint16_t e;
typedef uint16_t g;

e fn1(e p1, int p2) {
  return p2;
}

struct m {
  int16_t n : 18;
  int16_t o : 1;
};

c r;
static int16_t s = -5L;
g t;
c u;
g v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int16_t ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
