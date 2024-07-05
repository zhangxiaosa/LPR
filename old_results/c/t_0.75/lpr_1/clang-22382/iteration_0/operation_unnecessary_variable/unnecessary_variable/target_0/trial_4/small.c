#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, unsigned, unsigned);
unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3);
  for (;;) {
    struct h r;
    p = r;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
  // No longer using the parameter p5.k
w:
  goto w;
}

int main() {}
