#include <stdio.h>

unsigned l;

signed i;
long j;
unsigned k;

static unsigned fn1(unsigned, short, unsigned, unsigned, signed, long, unsigned);
unsigned fn2(p1) {
  signed p_i;
  long p_j;
  unsigned p_k;
  int q;
  fn1(q, l, p1, 3, p_i, p_j, p_k);
  for (;;) {
    signed r_i;
    long r_j;
    unsigned r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, signed p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

int main() {}
