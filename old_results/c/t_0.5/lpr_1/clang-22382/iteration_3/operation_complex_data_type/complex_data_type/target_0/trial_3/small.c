#include <stdio.h>

int main() {
  int p_i;
  long p_j;
  int p_k;
  int r_i;
  long r_j;
  int r_k;

  fn1_k(p_k);
  for (;;) {
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
    r_i = p_i;
    r_j = p_j;
    r_k = p_k;
  }
}

int fn1_k(int p5_k) {
w:;
  goto w;
}