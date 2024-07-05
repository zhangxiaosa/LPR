#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  fn1_k(p);

  // Unrolled loop body
  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;

  return 0;
}

int fn1_k(struct h p5) {
  p5.k;
w:;
  // goto w; is replaced with the unrolled loop body
  p5 = p5;
  p5 = p5;
  p5 = p5;
  p5 = p5;

  goto w;
}

int main() {
  return 0;
}