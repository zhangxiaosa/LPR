
#include <stdio.h>
#include <stdlib.h>

// Decomposed struct h
struct h {
  long i;
  long j;
  long k;
};

// Decomposed function fn1
static long fn1(long p1, long p4, long p5) {
  p5.k;
  goto w;
}

// Decomposed function fn2
long fn2(long p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
