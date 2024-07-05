#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p3, struct h p5) {
  p5.k;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, p);

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() { return 0; }
