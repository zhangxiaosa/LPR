#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(signed p5_i, long p5_j, unsigned p5_k) {
  for (;;) p5_k;
}

unsigned fn2() {
  signed p_i;
  long p_j;
  unsigned p_k;
  fn1(p_i, p_j, p_k);
  for (;;) {
    struct h r;
    p_i = r.i = p_i;
    p_j = r.j = p_j;
    p_k = r.k = p_k;
  }
}

int main() {}
