#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  int p5_i = p5.i;
w:
  goto w;
}

unsigned fn2(p1) {
  struct h r;
  fn1(0, l, p1, 3, r);
  for (;;) {
    r = r;
  }
}

int main() {
  return 0;
}
