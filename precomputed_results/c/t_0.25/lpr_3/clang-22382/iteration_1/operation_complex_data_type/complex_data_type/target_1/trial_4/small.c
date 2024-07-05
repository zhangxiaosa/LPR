#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p.i, p.j, p.k);
  for (;;) {
    struct h r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }
}

int main() {}
