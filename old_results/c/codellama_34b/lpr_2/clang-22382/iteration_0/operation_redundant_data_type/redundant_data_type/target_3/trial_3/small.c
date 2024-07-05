
#include <stdio.h>

typedef unsigned int d;

struct h {
  d i;
  long j;
  unsigned int k;
};

int l;

static struct h fn1(d p1, short p2, d p3, int p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int fn2(d p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
