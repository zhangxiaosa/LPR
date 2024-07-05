#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, struct h);

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, p);
  for (;;) {
    p = p;
  }
}

struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() { return 0; }.