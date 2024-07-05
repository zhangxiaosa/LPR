#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(struct h p5) {
  // No effect. Can be optimized out.
  p5.k;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = p;
  }
}

int main() {}
