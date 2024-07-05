#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1();

uint32_t fn2(p1) {
  struct h p;
  int q;
  fn1(q, p1, 3, p);

  // Optimized loop unrolling
  struct h r1, r2, r3, r4;

  p = r1 = p;
  p = r2 = p;
  p = r3 = p;
  p = r4 = p;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, unsigned p3, uint32_t p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
