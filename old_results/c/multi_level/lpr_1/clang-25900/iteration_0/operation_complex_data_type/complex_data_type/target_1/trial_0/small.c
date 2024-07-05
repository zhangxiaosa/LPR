#include <stdint.h>

int r;
int32_t s = -5;
int t;
int u;
int v;

int fn1(uint32_t p1, int p2) {
  return p2;
}

void fn4() {
  struct m {
    int32_t n;
    int32_t o;
  };

  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int32_t ae;
  int32_t af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  fn4();
  return 0;
}
