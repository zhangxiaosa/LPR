#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1(unsigned int p1, int p5_i, long p5_j, int p5_k) {
  // p5.k; - Removed
  w:
    goto w;
}

unsigned int fn2(unsigned int p1) {
  int p_i;
  long p_j;
  int p_k;
  fn1(0, p_i, p_j, p_k);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    // p = r = p; - Removed
  }
}

int main() {
  return 0;
}