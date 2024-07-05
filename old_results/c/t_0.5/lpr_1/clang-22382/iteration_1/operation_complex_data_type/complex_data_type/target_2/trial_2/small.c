#include <stdio.h>

int i;
long j;
int k;

static void fn1(int p1, int p5_i, long p5_j, int p5_k);

unsigned int fn2(unsigned int p1) {
  int p_i;
  long p_j;
  int p_k;
  int q;
  fn1(q, p_i, p_j, p_k);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

void fn1(int p1, int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

int main() {}
