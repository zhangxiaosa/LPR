#include <stdio.h>

struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1() {
  w:
  goto w;
}

unsigned fn2() {
  struct H p;
  fn1();
  for (;;) {
    struct H r;
    p = p;
  }
}

int main() {
  return 0;
}
