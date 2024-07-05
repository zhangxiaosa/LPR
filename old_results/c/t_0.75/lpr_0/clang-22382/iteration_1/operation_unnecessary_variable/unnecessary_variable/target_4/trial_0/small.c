#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(0, l, p); // Optimized out p1 by passing 0 instead
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
