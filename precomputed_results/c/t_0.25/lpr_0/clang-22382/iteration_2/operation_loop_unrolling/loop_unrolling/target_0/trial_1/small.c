#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p);

  struct h r1 = p;
  p = r1;

  struct h r2 = p;
  p = r2;

  struct h r3 = p;
  p = r3;

  struct h r4 = p;
  p = r4;
}

int main() {
  return 0;
}
