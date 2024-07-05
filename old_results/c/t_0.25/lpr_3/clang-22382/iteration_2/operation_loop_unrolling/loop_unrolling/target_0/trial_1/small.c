#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5) {
  int p5_k = p5.k;
}

int fn2() {
  struct h p;
  fn1(0, l, p);
  struct h r1;
  p = r1 = p;
  struct h r2;
  p = r2 = p;
}
