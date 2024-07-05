
#include <stdint.h>

int8_t fn1(int8_t p1, int8_t p2) { return p2; }

struct m {
  int8_t n : 18;
  int8_t o : 1;
};

int8_t r;
static int8_t s = -5;
int8_t u;

int8_t fn4() {
  struct m ad = {1957};
  ad.o = fn1(0, 5);
  int8_t ae = ad.o;
  ad.o = u;
  r = ad.o % (s / ae);
}

int8_t main() { fn4(); }
