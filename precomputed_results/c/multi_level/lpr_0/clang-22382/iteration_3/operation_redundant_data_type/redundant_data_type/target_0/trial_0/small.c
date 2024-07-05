#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static unsigned fn1(unsigned p1, int i, long j, unsigned k) {
  k;
w:
  goto w;
}

unsigned fn2() {
  int i;
  long j;
  unsigned k;
  fn1(0, i, j, k);
  while (1) {
    int r_i;
    long r_j;
    unsigned r_k;
    i = r_i = i;
    j = r_j = j;
    k = r_k = k;
  }
}

int main() {}
