#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  for (;;) {
    p5.k;
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
  }
}
