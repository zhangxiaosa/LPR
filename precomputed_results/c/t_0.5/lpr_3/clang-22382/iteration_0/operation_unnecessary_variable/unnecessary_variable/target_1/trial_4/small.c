#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(short p2, unsigned p3, unsigned p4, struct h p5) {
  for (;;) {
    p5.k;
  }
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(l, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
