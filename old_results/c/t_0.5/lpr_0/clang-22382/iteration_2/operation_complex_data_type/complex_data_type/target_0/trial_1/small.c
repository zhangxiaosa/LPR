#include <stdio.h>

struct h {
  int i;
  unsigned int k;
};

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned int fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    p = p;
  }
}
