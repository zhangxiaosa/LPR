
#include <stdint.h>

uint32_t fn1(uint32_t p1, int32_t p2) { return p2; }

int32_t r;
static int32_t s = -5;
int32_t u;

int32_t fn4() {
  int32_t n = 1957;
  int32_t o = fn1(0, 5);
  int32_t ae = o;
  int32_t af = u;
  ae = o;
  r = af % (~s / ae);
  return ae;
}

int32_t main() { fn4(); }
