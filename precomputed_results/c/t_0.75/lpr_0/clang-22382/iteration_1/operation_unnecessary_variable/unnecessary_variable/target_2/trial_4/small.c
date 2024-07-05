#include <stdio.h>

struct h {
  int i;
  long j;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5) {
  p5;
  w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
