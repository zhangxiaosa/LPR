#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();
unsigned fn2() {
  struct h p;
  fn1(p);

  struct h r1, r2, r3, r4;
  p = r1 = p;
  p = r2 = p;
  p = r3 = p;
  p = r4 = p;

  for (;;) {
    p = r1 = p;
    p = r2 = p;
    p = r3 = p;
    p = r4 = p;
  }
}

struct h fn1(struct h p5) {
  unsigned p5_i = p5.i;
w:
  goto w;
}

int main() {
  fn2();
  return 0;
}