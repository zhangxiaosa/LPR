#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, int p5_i, long p5_j, int p5_k) {
  int p5_k_local = p5_k;
w:
  goto w;
}

int fn2() {
  struct h p;
  int p5_i = p.i;
  long p5_j = p.j;
  int p5_k = p.k;
  fn1(0, l, p5_i, p5_j, p5_k);
  for (;;) {
    struct h r;
    p.i = r.i = p5_i;
    p.j = r.j = p5_j;
    p.k = r.k = p5_k;
  }
}

int main() {
  return 0;
}