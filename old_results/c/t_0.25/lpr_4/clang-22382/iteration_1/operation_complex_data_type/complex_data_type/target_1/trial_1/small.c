#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p3, unsigned p5, int p6_i, long p6_j, int p6_k) {
  p6_k;
w:;
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, 3, p.i, p.j, p.k);
  for (;;) {
    struct h r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }
}

int main() {}
