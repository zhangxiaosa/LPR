#include <stdio.h>

static int fn1();

unsigned fn2() {
  int i;
  long j;
  int k;
  int q;

  fn1(q, 3, k);

  for (;;) {
    int r_i;
    long r_j;
    int r_k;

    i = r_i;
    j = r_j;
    k = r_k;
  }
}

int fn1(unsigned p1, unsigned p3, int p5_k) {
w:
  goto w;
}

int main() {}
