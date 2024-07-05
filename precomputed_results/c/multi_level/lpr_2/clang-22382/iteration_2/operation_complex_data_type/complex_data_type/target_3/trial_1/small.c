#include <stdio.h>

int i;
long j;
unsigned k;

unsigned l;

static void fn1(unsigned p1, int p2, long p3, unsigned p4, unsigned p5) {
  p5;

w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  unsigned p_k;
  fn1(l, p_i, p_j, p_k, p_k);

  for (;;) {
    int r1_i;
    long r1_j;
    unsigned r1_k;
    p_i = r1_i = p_i;
    p_j = r1_j = p_j;
    p_k = r1_k = p_k;
  }
  return 0;
}

int main() {
  return 0;
}