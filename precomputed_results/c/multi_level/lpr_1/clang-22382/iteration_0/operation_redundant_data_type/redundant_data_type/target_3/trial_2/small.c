#include <stdio.h>

signed i;
long j;
unsigned k;
unsigned l;

static void fn1(unsigned, short, unsigned, unsigned, signed, long, unsigned);

unsigned fn2(unsigned p1) {
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

void fn1(unsigned p1, short p2, unsigned p3, unsigned p4, signed p5_i, p5_j, p5_k) {
w:;
  goto w;
}

int main() {
  return 0;
}