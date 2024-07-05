#include <stdio.h>

struct h {
  int i;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  p5.k;
}

unsigned fn2(unsigned p1) {
  struct h p;
  fn1(p1, p);
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
