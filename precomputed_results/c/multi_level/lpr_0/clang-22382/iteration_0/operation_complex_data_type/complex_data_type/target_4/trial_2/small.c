#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static struct original_data_type fn1(unsigned p1, short p2, unsigned p3, unsigned p4, int p5_i, long p5_j, unsigned p5_k) {
  p5_k;

w:
  goto w;
}

unsigned fn2(unsigned p1, int q, int p_i, long p_j, unsigned p_k) {
  struct original_data_type p;
  fn1(q, l, p1, 3, p.i, p.j, p.k);
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}
