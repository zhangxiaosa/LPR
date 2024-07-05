#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1_i(int p5_i) {
  return p5_i;
}

static long fn1_j(long p5_j) {
  return p5_j;
}

static int fn1_k(int p5_k) {
  return p5_k;
}

static int fn1(int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2_i(int p_i, long p_j, int p_k) {
  int r_i = p_i;
  long r_j = p_j;
  int r_k = p_k;

  for (;;) {
    int temp_i = r_i;
    long temp_j = r_j;
    int temp_k = r_k;

    p_i = r_i = temp_i;
    p_j = r_j = temp_j;
    p_k = r_k = temp_k;
  }
}

unsigned fn2() {
  int p_i = 0;
  long p_j = 0;
  int p_k = 0;

  fn1(p_i, p_j, p_k);

  return fn2_i(p_i, p_j, p_k);
}

int main() {}
