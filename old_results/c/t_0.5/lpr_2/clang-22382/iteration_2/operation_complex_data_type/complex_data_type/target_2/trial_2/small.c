#include <stdio.h>

int i;
long j;
int k;

static int fn1_i;

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  int p5_i;
  int r_i;
  long r_j;
  int r_k;

  fn1_i = p5_i;

w:
  goto w;
}

int main() {
  return 0;
}