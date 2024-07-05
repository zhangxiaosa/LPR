#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p3, unsigned p4, struct h p5) {
  p5.k; // Unused variable
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, p);
  for (;;) {
    struct h r;
    p = r = p; // Redundant assignment
  }
}

int main() {}
