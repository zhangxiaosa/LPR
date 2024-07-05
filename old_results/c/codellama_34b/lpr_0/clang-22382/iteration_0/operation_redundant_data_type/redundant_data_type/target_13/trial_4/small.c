
#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;
static struct h fn1(unsigned p1, unsigned p3, struct h p5) {
  p5.j = p1;
  return p5.j;
}

unsigned fn2(unsigned p1) {
  struct h p;
  unsigned q;
  fn1(q, p1, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
