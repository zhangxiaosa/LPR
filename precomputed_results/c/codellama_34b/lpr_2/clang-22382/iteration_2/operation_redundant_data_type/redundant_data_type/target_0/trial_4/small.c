
#include <stdint.h>

struct h {
  int16_t i;
  int32_t j;
  int16_t k;
};

static struct h fn1(int16_t p1, int16_t p4, struct h p5) {
  p5.k;
  goto w;
}

int16_t fn2(int16_t p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
