#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, unsigned p4, struct h p5) {
  int p5_i = p5.i;
w:
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  struct h r;
  fn1(0, p1, 3, p);
  for (;;)
    p = r = p;
}

int main() {}
