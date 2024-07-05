#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p4, struct h p5) {
  // Unused variable: p5.k
  w:
    goto w;
}

unsigned fn2() {
  struct h p;
  fn1(3, p);
  for (;;) {
    struct h r;
    // Redundant assignment: p = r = p
  }
}

int main() {}
