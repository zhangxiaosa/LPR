#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5);

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() { return 0; }