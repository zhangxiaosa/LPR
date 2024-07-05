#include <stdio.h>

static unsigned int fn1(unsigned p1, short p2, unsigned p3, unsigned p4, unsigned int p5_i, unsigned long p5_j, unsigned int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned int fn2(unsigned int p1) {
  unsigned int p_i, p_k;
  unsigned long p_j;
  fn1(0, 0, p1, 3, p_i, p_j, p_k);
}

int main() {
  return 0;
}