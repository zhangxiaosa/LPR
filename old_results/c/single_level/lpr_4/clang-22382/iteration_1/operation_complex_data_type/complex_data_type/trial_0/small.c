#include <stdint.h>

struct h {
  signed int i;
  long j;
  unsigned int k;
};

uint32_t l;

static struct h fn1(unsigned int, short int, unsigned int, uint32_t, struct h);

uint32_t fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, short int p2, unsigned int p3, uint32_t p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
