#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

uint32_t l;

static struct h fn1(unsigned, short, unsigned, uint32_t, struct h);

uint32_t fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  struct h r1, r2, r3, r4, r5;
  p = r1 = p;
  p = r2 = p;
  p = r3 = p;
  p = r4 = p;
  p = r5 = p;
}

struct h fn1(unsigned p1, short p2, unsigned p3, uint32_t p4, struct h p5) {
  p5.k;
  w:
  goto w;
}

int main() {}