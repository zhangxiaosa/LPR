
#include <stdint.h>

uint32_t fn1(uint32_t p1, int32_t p2) { return p2; }

int32_t r;
static int32_t s = -5;
int32_t u;

int32_t fn4() {
  int32_t ad_n = 1957;
  int32_t ad_o = fn1(0, 5);
  int32_t ae;
  int32_t af = u;
  ae = ad_o;
  ad_o = u;
  r = af % (~s / ae);
  ad_o;
}

int32_t main() { fn4(); }
