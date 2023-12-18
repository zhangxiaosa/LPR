#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, unsigned p3, unsigned p4, struct h p5) {
  unsigned p5_k = p5.k;
w:
  goto w;
}

int fn2() {
  struct h p;
  int q;
  fn1(q, 3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
