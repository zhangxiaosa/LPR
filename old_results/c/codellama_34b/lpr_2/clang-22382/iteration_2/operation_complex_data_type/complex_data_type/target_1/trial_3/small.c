
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

long fn2(long p1) {
  long i, j, k;
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    long r;
    i = r;
    j = r;
    k = r;
  }
}

int main() {}
