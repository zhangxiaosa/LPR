
#include <stdint.h>

uint32_t fn1(int32_t p2) { return p2; }

struct m {
  int32_t n : 18;
  int32_t o : 1;
};

int32_t fn4() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int32_t ae = ad.o;
  ad.o = u;
}

int32_t main() { fn4(); }
