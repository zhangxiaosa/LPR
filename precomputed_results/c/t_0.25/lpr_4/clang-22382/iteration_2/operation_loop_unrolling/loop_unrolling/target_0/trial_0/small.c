#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p6) {
  p6.k;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);

  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;

  return 0;
}

int main() {
  fn2();
  return 0;
}