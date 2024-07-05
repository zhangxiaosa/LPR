#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1(unsigned p3, int p5_i, long p5_j, int p5_k) {
  int unused = p5_k;
  while (1) {
  }
}

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  int q;
  fn1(q, p_i, p_j, p_k);
  while (1) {
    int r_i;
    long r_j;
    int r_k;
    int p_i_new = r_i;
    long p_j_new = r_j;
    int p_k_new = r_k;
    p_i = p_i_new;
    p_j = p_j_new;
    p_k = p_k_new;
  }
}

int main() {
}
