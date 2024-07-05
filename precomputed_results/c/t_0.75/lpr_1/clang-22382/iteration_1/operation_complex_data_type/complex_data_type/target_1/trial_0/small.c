#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned, short, struct h);

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, p.k, p);
}

struct h fn1(unsigned p1, short p2, struct h p5) {
  // Modify p5 as needed for optimization

  return p5;
}

int main() {}
