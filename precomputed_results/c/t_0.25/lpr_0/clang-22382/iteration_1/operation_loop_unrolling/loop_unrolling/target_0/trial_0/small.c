#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  struct h r1;
  p = r1 = p;
  struct h r2;
  p = r2 = p;
  struct h r3;
  p = r3 = p;
  struct h r4;
  p = r4 = p;
}

int main() {
  fn2();
  return 0;
}