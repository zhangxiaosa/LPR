#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
w:
  goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p);
  {
    struct h r1;
    p = r1 = p;
  }
  {
    struct h r2;
    p = r2 = p;
  }
  {
    struct h r3;
    p = r3 = p;
  }
  {
    struct h r4;
    p = r4 = p;
  }
}

int main() {}
