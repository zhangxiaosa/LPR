#include <stdio.h>

int i;
long j;
unsigned k;

static void fn1(unsigned p1, short p2, int p_i, long p_j, unsigned p_k) {
  p_k;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  unsigned p_k;

  fn1(0, 0, p_i, p_j, p_k);

  for (;;) {
    int r_i;
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
