#include <stdio.h>

static int fn1(unsigned p1, short p2, unsigned p3, unsigned p4, int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2(unsigned p1) {
  int p_i;
  long p_j;
  fn1(0, 0, p1, 3, p_i, p_j, p_i);
  for (;;) {
    int r_i;
    long r_j;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
  }
}

int main() {
  return 0;
}