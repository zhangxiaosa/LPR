
#include <stdint.h>

uint32_t fn1(uint32_t p1, int32_t p2) { return p2; }

struct m {
  int32_t n : 18;
  int32_t o : 1;
};

int32_t r;
static int32_t s = -5;
int32_t u;

int32_t fn4() {
  int32_t ae = 5;
  int32_t ad = 1957;
  ad.o = fn1(0, ae);
  r = ad.o % (~s / ae);
}

int32_t main() { fn4(); }
