#include <stdio.h>

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
    int i;
    long j;
    unsigned k;
    i = j = i;
  }
}