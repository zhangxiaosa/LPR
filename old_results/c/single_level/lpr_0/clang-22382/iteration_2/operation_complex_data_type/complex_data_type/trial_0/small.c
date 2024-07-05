#include <stdio.h>

struct hjson {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct hjson fn1(unsigned, short, unsigned, unsigned, struct hjson);

unsigned fn2(p1) {
  struct hjson p;
  int q;
  fn1(q, l, p1, 3, p);
  struct hjson r1;
  for (;;) {
    p = r1 = p;
  }
}

struct hjson fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct hjson p5) {
  p5.k;
  w:
  goto w;
}

int main() {
  return 0;
}
