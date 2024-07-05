#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, struct h p6) {
  p6.k;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h p;
    p = p;
  }
}

int main() {}
