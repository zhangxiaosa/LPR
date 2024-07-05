#include <stdio.h>

signed int h_i;
long h_j;
unsigned int h_k;

unsigned int l;

static unsigned int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                        signed int p5_i, long p5_j, unsigned int p5_k) {
  p5_k;
w:
  goto w;
}

int fn2(unsigned int p1) {
  signed int p_i;
  long p_j;
  int q;
  fn1(q, l, p1, 3, p_i, p_j, h_k);
  for (;;) {
    signed int r_i;
    long r_j;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
  }
}

int main() {
  return 0;
}