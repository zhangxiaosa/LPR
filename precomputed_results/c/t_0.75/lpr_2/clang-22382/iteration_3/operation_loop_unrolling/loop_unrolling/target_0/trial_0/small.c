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

unsigned fn2(p1) {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r1, r2, r3, r4;
    p = r1 = p;
    p = r2 = p;
    p = r3 = p;
    p = r4 = p;
  }
}

int main() {
  fn2(0);
  return 0;
}