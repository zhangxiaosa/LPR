
#include <stdint.h>

int32_t fn1(int32_t p2) { return p2; }

struct m {
  int32_t n : 18;
  int32_t o : 1;
};

int32_t r;
static int32_t s = -5;
int32_t u;

int32_t main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int32_t ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}
