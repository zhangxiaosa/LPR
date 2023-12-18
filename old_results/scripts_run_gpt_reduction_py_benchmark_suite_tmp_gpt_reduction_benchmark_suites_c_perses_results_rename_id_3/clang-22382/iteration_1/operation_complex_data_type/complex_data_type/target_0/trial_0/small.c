#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static unsigned int fn1(unsigned int p5_k) {
  unsigned int p5_k_copy = p5_k;

w:
  goto w;
}

int fn2() {
  unsigned int p_i;
  long int p_j;
  unsigned int p_k;
  fn1(p_k);
  for (;;) {
    unsigned int r_i;
    long int r_j;
    unsigned int r_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
  return 0;
}

int main() {
  return 0;
}