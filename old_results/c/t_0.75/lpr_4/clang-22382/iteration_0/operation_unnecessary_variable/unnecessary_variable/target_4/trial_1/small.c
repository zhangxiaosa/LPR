#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned, unsigned);

unsigned fn2() {
  int q;
  fn1(q, 3);
  for (;;) {
    struct h r;
    r = r;
  }
}

struct h fn1(unsigned p1, unsigned p3) {
w:
  goto w;
}

int main() {}
