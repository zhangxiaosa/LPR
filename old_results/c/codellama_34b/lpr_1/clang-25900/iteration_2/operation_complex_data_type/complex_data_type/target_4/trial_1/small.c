
#include <stdint.h>

uint32_t fn1(uint32_t p1, int32_t p2) { return p2; }

// Decomposition of the struct m
int32_t n;
int32_t o;

int32_t r;
static int32_t s = -5;
int32_t u;

int32_t fn4() {
  // Decomposition of the struct m
  n = 1957;
  o = fn1(0, 5);
  int32_t ae = o;
  o = u;
  r = o % (~s / ae);
}

int32_t main() { fn4(); }
