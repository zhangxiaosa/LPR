#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
  w:
    goto w;
}

unsigned fn2(p1) {
  int q;
  fn1(q, l, p1, 3);
  for (;;) {}
}

int main() {}
