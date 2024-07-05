
#include <stdio.h>
#include <stdlib.h>

struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(long p1, long p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

long fn2(p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}

// Decomposition of struct h into primary data types
long i, j, k;

// Decomposition of fn1
static long fn1_i, fn1_j, fn1_k;
static long fn1(long p1, long p4, long fn1_i, long fn1_j, long fn1_k) {
  fn1_k;
w:;
  goto w;
}

// Decomposition of fn2
long fn2_i, fn2_j, fn2_k;
long fn2(long p1) {
  fn2_i = p1;
  fn2_j = 3;
  fn2_k = fn1(fn2_i, fn2_j, fn2_k);
  for (;;) {
    long r_i, r_j, r_k;
    r_i = r_j = r_k = fn2_k;
  }
}

int main() {}
