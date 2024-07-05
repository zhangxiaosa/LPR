#include <stdio.h>

signed int i;
long j;
unsigned int k;

static void fn1(signed int p5_i, long p5_j, unsigned int p5_k) {
  for (;;) {
    p5_k;
  }
}

unsigned int fn2() {
  signed int p_i;
  long p_j;
  unsigned int p_k;
  
  fn1(p_i, p_j, p_k);
  
  for (;;) {
    signed int r_i;
    long r_j;
    unsigned int r_k;
    
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}
