#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  // unsigned p5_k = p5.k; (removed)
w:
  goto w;
}

int fn2() {
  struct h p;
  int q;
  fn1(0, 0, 0, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  // Empty main function
  return 0;
}