#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p6) {
  p6.k;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}