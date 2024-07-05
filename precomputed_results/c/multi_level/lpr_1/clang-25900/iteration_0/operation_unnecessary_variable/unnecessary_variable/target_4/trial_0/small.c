#include <stdint.h>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;
int t;
int v;

int fn1(uint32_t p1, int p2) { return p2; }

int fn4() {
  struct m ad = {1957, 0};
  ad.o = fn1(v, 5);
  signed ae;
  ae = ad.o;
  r = t % (~s / ae);
}

int main() {
  fn4();
}