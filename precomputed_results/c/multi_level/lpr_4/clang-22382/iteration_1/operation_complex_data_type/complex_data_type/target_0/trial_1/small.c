#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.k;
  while (1) {
  }
}

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  int q;
  fn1(p_i, p_j, p_k);
  while (1) {
    int r_i;
    long r_j;
    int r_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {}
