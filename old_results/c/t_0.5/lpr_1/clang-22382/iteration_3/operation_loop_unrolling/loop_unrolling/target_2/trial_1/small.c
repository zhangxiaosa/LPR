#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1_k();

unsigned fn2() {
  struct h p;
  fn1_k(p);

  // Loop unrolling
  struct h r1, r2, r3, r4;
  p = r1 = p;
  p = r2 = p;
  p = r3 = p;
  p = r4 = p;

  return 0;
}

int fn1_k(struct h p5) {
  p5.k;

w:;
  p5.k;

w:;
  p5.k;

w:;
  p5.k;

w:;
  return 0;
}

int main() {
  fn2();
  return 0;
}