#include <stdio.h>

static short fn1(short p5_i, long p5_j, unsigned p5_k) {
  // Remove usage of p5.k

w:
  goto w;
}

unsigned fn2() {
  short p_i;
  long p_j;
  unsigned p_k;
  
  fn1(p_i, p_j, p_k);
  
  for (;;) {
    short r_i;
    long r_j;
    unsigned r_k;
    
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {
  return 0;
}
