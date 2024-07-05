#include <stdio.h>

struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

struct h fn1(short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
