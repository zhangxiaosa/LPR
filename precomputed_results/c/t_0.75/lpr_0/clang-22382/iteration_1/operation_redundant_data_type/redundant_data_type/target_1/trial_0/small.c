#include <stdio.h>

unsigned l;

signed i;
long j;
unsigned k;

static long fn1(unsigned, short, signed, long, unsigned);

unsigned fn2(p1) {
  signed p_i;
  long p_j;
  unsigned p_k;
  int q;
  fn1(q, l, p_i, p_j, p_k);
  for (;;) {
    signed r_i;
    long r_j;
    unsigned r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

long fn1(unsigned p1, short p2, signed p3, long p4, unsigned p5) {
  p5;
w:
  goto w;
}

int main() {}
