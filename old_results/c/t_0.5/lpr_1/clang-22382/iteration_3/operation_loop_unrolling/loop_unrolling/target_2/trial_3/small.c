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
  for (;;) {
    struct h r;
    p = r = p;
    p = r = p;
    // Duplicate the loop body as many times as needed
    // ...
    // p = r = p;
  }
}

int fn1_k(struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {
  fn2();
  return 0;
}