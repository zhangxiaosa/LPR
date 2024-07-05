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

  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  // Repeat the unrolled loop body indefinitely

  // continue with the rest of the program
}

int main() {}
