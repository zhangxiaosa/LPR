#include <stdio.h>

struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  return p5;
}

unsigned fn2() {
  struct H p;
  fn1(p);
  for (;;) {
    struct H r1;
    p = r1 = p;
    struct H r2;
    p = r2 = p;
  }
}

int main() {
  return 0;
}