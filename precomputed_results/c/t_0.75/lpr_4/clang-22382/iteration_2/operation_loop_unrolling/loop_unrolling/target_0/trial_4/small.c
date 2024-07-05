#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  p5;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(3, p);

  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;

  // Repeat the loop body as needed

  // ...

  // Repeat the loop body as needed

  return 0;
}

int main() {}
