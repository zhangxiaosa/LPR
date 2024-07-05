#include <stdio.h>

typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, g, unsigned, struct h);

e fn2() {
  struct h p;
  int q;
  fn1(q, l, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, short p2, g p3, unsigned p4, struct h p5) {
  w:;
  goto w;
}

int main() {}
