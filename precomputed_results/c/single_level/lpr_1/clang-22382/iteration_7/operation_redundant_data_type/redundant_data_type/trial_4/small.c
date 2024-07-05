#include <stdio.h>

signed i;
long j;
unsigned k;

unsigned l;

static void fn1(unsigned, short, unsigned, signed, long, unsigned);
unsigned fn2(p1) {
  signed p_i;
  long p_j;
  unsigned p_k;
  fn1(l, p1, 3, p_i, p_j, p_k);
  for (;;) {
    signed r_i;
    long r_j;
    unsigned r_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

void fn1(unsigned p1, short p2, unsigned p3, signed p_i, long p_j, unsigned p_k) {
  p_k;
w:
  goto w;
}

int main() {}
