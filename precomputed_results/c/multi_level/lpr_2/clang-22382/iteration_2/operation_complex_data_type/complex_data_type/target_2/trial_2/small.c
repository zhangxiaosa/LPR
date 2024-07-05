#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, int p5_i, long p5_j, unsigned p5_k) {
  p5_k;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  /* Optimization target: p */
  fn1(l, p.i, p.j, p.k);

  for (;;) {
    struct h r1;
    p = r1 = p;
  }
}

int main() { return 0; }
