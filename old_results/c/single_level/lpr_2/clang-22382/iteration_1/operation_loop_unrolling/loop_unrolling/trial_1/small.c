#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
  return p5;
}

unsigned fn2(unsigned p1) {
  struct h p;
  unsigned q;
  fn1(q, l, p1, 3, p);
  return 0;
}

int main() {
  return 0;
}