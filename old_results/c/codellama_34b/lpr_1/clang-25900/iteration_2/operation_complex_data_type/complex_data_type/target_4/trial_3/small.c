
#include <stdint.h>

uint32_t fn1(uint32_t p1, int32_t p2) { return p2; }

int32_t n;
int32_t o;

int32_t r;
int32_t s;
int32_t u;

int32_t fn4() {
  n = 1957;
  o = fn1(0, 5);
  int32_t ae = o;
  o = u;
  r = o % (~s / ae);
}

int32_t main() { fn4(); }
