#include <iostream>

struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct H p;
  fn1(p);
  
  struct H r;
  p = r = p;

  return 0;
}

int main() {
  return 0;
}
