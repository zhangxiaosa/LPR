#include <stdio.h>

unsigned l;

static unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, unsigned p5_k) {
w:
  goto w;
}

unsigned fn2(unsigned p1) {
  unsigned p_i, p_j, p_k;
  unsigned q;
  
  fn1(q, l, p1, 3, p_k);
  
  for (;;) {
    unsigned r_i, r_j, r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {
  return 0;
}