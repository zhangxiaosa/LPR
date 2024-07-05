#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  w:
  goto w;
}

unsigned fn2() {
  struct h p;

  fn1(p.i);
  fn1(p.j);
  fn1(p.k);

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
