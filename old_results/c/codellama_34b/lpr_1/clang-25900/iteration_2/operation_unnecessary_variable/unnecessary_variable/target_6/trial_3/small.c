
#include <stdint.h>

uint32_t fn1(int32_t p2) { return p2; }

int32_t r;
static int32_t s = -5;
int32_t u;

int32_t fn4() {
  r = u % (~s / 5);
}

int32_t main() { fn4(); }
