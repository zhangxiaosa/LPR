#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static unsigned fn1(unsigned p1) {
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  /* Optimization target: p */
  fn1(l);

  for (;;) {
    struct h r1;
    p = r1 = p;
  }
}

int main() {
  return 0;
}
