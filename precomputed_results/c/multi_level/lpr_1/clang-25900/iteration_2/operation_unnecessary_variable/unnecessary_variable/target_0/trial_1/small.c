#include <stdint.h>

int r;
static signed s = -5L;
int t;
int v;

int fn1(uint32_t p1, int p2) {
  return p2;
}

int main() {
  fn1(v, 5);
  signed ae = 0;
  r = t % (~s / ae);
}
