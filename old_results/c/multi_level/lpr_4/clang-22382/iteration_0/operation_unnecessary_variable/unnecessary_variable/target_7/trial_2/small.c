#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p3, struct h p5) {
  // p5.k removed (unused variable)
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, p);
  for (;;) {
    struct h r; // variable r is no longer needed
    p = p; // Redundant assignment removed
  }
}

int main() {}