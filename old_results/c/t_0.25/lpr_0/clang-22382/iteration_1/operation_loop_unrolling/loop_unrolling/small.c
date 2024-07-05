#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    // Iteration 1
    struct h r1;
    p = r1 = p;

    // Iteration 2
    struct h r2;
    p = r2 = p;

    // Iteration 3
    struct h r3;
    p = r3 = p;

    // Iteration 4
    struct h r4;
    p = r4 = p;
  }
}

int main() { return 0; }