#include <stdbool.h>

int i;
long j;
int k;

static int fn1(unsigned p1, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  fn1(3, p_k);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}
