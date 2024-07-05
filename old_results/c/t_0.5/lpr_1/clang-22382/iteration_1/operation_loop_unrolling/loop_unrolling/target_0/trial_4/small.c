#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5);

unsigned fn2(int p1) {
  struct h p;
  int q;
  fn1(q, p);

  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;

  return 0;
}

struct h fn1(unsigned p1, struct h p5) {
w:
  goto w;
}

int main() {
  fn2(0);
  return 0;
}