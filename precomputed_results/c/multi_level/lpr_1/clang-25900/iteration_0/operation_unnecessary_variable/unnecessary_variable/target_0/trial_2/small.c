#include <stdint.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;
int u;
int v;

int fn1(uint32_t p1, int p2) {
  return p2;
}

int fn4() {
  int ae;
  int af = t;
  ae = fn1(v, 5);
  r = af % (~s / ae);
}

int main() {
  fn4();
}