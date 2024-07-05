#include <stdio.h>

short h_i;
long h_j;
unsigned h_k;
unsigned l;

static unsigned fn1(unsigned, short, unsigned, unsigned, unsigned);

unsigned fn2(unsigned p1) {
  short p2 = h_i;
  unsigned p3 = h_k;
  unsigned p4 = l;
  unsigned p5_k = h_k;

  int q;
  fn1(q, l, p1, 3, p5_k);

  for (;;) {
    struct h r;
    h_k = r.k = p5_k;
  }
}

static unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, unsigned p5_k) {
  p5_k;
w:;
  goto w;
}

int main() {}