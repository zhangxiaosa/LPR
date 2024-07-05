#include <stdio.h>

struct H {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct H fn1(unsigned p1) {
  p1;
w:
  goto w;
}

unsigned fn2() {
  struct H p;
  int q;
  fn1(q);
  for (;;) {
    struct H r;
    p = p;
  }
}

int main() {}
