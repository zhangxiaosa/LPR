#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, unsigned, unsigned);

unsigned fn2(unsigned p1) {
  int q;
  fn1(q, l, p1, 3);
  for (;;) {
    struct h r;
    r = r;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
w:;
  goto w;
}

int main() {
  return 0;
}