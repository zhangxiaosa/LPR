#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, unsigned p3, struct h p5);

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, p);

  struct h r;

  // Unrolled iteration 1
  p = r = p;

  // Unrolled iteration 2
  p = r = p;

  return 0;
}

struct h fn1(unsigned p1, unsigned p3, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {
  fn2();
  return 0;
}