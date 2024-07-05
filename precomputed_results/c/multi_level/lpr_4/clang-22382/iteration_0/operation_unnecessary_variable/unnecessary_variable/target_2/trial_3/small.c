#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p3, unsigned p4) {
  p3; // Unused variable
w:
  goto w;
  struct h retval;
  return retval;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3);
  for (;;) {
    struct h r;
    p = p;
  }
}

int main() {}
