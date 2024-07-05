#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned, short, struct h);

unsigned fn2(p1) {
  struct h p;
  fn1(0, l, p);
  for (;;) {
    p = p;
  }
}

struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
