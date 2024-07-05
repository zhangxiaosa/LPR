#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static unsigned fn1(unsigned p5_k) {
  unsigned p5_k_temp = p5_k;
w:
  goto w;
}

int fn2() {
  unsigned p_i;
  long p_j;
  unsigned p_k;
  unsigned r_i;
  long r_j;
  unsigned r_k;

  unsigned p5_k = p_k;
  p5_k = fn1(p5_k);

  for (;;) {
    r_i = p_i;
    r_j = p_j;
    r_k = p_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {
  return 0;
}