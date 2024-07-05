#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1();

unsigned fn2(unsigned p1) {
  struct h p;
  fn1(l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, struct h p5) {
  unsigned p5_i;
  long p5_j;
  unsigned p5_k;

  p5_k;

w:
  goto w;
}

int main() {
  return 0;
}