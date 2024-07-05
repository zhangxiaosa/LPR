
#include <stdint.h>

int32_t g(int32_t p1, int32_t p2) { return p2; }

struct m {
  int32_t n : 18;
  int32_t o : 1;
};

int32_t main() {
  struct m ad = {1957};
  ad.o = g(v, 5);
  int32_t ae = ad.o;
  ad.o = 5;
  // r is not used anywhere, so it can be optimized out
  // r = t % (17 / ae);
  ad.o;
}
