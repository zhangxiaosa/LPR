#include <stdio.h>

unsigned l;

static int fn1(unsigned, short, unsigned, int, long, int);

unsigned fn2(unsigned p1) {
  int p_i, long p_j, int p_k;
  int q;
  fn1(q, l, 3, p_i, p_j, p_k);
  for (;;) {
    int r_i, long r_j, int r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int fn1(unsigned p1, short p3, unsigned p5, int p6_i, long p6_j, int p6_k) {
  p6_k;
w:;
  goto w;
}

int main() {}
