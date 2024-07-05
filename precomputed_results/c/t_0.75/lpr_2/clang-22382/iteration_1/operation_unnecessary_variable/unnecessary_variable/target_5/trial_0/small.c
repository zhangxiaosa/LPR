#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
  p3;
w:
  goto w;
}

unsigned fn2() {
  int q;
  fn1(q, 0, 3);
  for (;;) {
    struct h r;
    r = r;
  }
}

int main() {}
