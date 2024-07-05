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

unsigned fn2(p1) {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  int p_i;
  long p_j;
  int p_k;

  // Optimization target: p
  struct h p;
  p.i = p_i;
  p.j = p_j;
  p.k = p_k;

  return 0;
}
