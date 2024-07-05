#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, p1, 3, p);
  struct h r;
  p = r = p;
}

int main() {
  unsigned p1 = 0;
  fn2(p1);
  return 0;
}