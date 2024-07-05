#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static int fn1(unsigned, short, int, long, unsigned);

int fn2(int p1) {
  int p_i, p_j, p_k;
  int q;
  fn1(q, l, p_i, p_j, p_k);
  for (;;) {
    int r_i, r_j, r_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int fn1(unsigned p1, short p2, int p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

int main() {}
