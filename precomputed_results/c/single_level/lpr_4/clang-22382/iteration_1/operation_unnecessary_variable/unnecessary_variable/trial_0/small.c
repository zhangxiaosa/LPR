#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

uint32_t l;

static struct h fn1(unsigned, short, unsigned, uint32_t);

uint32_t fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3);

  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, uint32_t p4) {
  p3;

w:
  goto w;
}

int main() {}