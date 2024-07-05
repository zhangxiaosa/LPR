
#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;
static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.j = (unsigned)p3;
  return p5.j;
}

unsigned fn2(unsigned p1) {
  struct h p;
  unsigned q;
  fn1(q, l, p1, 3, p);
  return p.j;
}

int main() {}
