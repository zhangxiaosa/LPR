#include <stdint.h>

struct h {
  int32_t i;
  int64_t j;
  int32_t k;
};

static struct h fn1(uint32_t p1, struct h p5) {
  p5.k;
w:
  goto w;
}

uint32_t fn2() {
  struct h p;
  fn1(3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int32_t main() {}
