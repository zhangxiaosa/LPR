#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    p_i = r.i;
    p_j = r.j;
    p_k = r.k;
    p.i = p_i;
    p.j = p_j;
    p.k = p_k;
  }
}

int main() {}
