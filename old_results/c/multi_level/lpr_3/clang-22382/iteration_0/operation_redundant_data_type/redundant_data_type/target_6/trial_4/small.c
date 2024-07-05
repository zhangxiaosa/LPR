#include <stdio.h>

typedef long c;
typedef unsigned f;
typedef unsigned g;

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(f, short, unsigned, unsigned, struct h);
unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, 3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(f p1, short p2, unsigned p4, unsigned p5, struct h p6) {
  p6.k;
w:
  goto w;
}

int main() {}
