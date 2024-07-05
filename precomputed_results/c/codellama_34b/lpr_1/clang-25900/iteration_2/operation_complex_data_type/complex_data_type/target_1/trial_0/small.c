
#include <stdint.h>

uint32_t fn1(uint32_t p1, int32_t p2) { return p2; }

int32_t r;
static int32_t s = -5;
int32_t u;

int32_t fn4() {
  int32_t ae = fn1(0, 5);
  ae = u;
  r = ae % (~s / ae);
}

int32_t main() { fn4(); }
