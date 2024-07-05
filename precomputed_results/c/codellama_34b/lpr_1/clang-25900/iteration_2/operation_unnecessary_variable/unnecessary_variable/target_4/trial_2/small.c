
#include <stdint.h>

int32_t r;
static int32_t s = -5;
int32_t u;

int32_t fn4() {
  struct m ad = {1};
  ad.o = u;
  r = ad.o % (~s / 5);
}

int32_t main() { fn4(); }
