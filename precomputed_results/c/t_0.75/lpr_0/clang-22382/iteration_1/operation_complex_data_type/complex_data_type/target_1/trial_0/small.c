#include <stdio.h>

signed int h_i;
long h_j;
unsigned int h_k;

unsigned int l;

static void fn1(unsigned int p1, short p2, signed int p3, long p4, unsigned int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned int fn2(unsigned int p1) {
  signed int p_i;
  long p_j;
  unsigned int p_k;
  int q;
  fn1(q, l, p_i, p_j, p_k);

  for (;;) {
    signed int r_i;
    long r_j;
    unsigned int r_k;

    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {
  return 0;
}