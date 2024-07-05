
#include <stdint.h>

int32_t g(int32_t p1, int32_t p2) { return p2; }

struct m {
  int32_t n : 18;
  int32_t o : 1;
};

int32_t r;
static int32_t s = -5L;
int32_t t;
int32_t v = 1;

int main() {
  struct m ad = {1957};
  int32_t p1 = v;
  int32_t p2 = 5;
  ad.o = g(p1, p2);
  int32_t ae = ad.o;
  ad.o = 5;
  r = t % (~s / ae);
  ad.o;
}
