#include <stdio.h>

int fn1(int p5_i);

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  int p5_i;
  fn1(p5_i);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int fn1(int p5_i) {
w:
  goto w;
}

int main() { return 0; }
