#include <stdio.h>

struct h {
  int i;
  int k;
};

static struct h fn1();

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, struct h p5) {
  p5.k;
 w:
  goto w;
}

int main() {
  return 0;
}
