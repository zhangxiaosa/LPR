#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, unsigned p3, struct h p5) {
  p5.i;
  p5.j;
  p5.k;

w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, p);
  for (;;) {
    struct h r;
    r.i = p.i;
    r.j = p.j;
    r.k = p.k;
    p.i = r.i;
    p.j = r.j;
    p.k = r.k;
  }
}

int main() {}
