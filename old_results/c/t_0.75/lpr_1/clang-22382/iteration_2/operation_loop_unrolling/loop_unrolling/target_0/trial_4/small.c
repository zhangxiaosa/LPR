#include <stdio.h>

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

  struct H r1;
  struct H r2;
  struct H r3;
  struct H r4;

  for (;;) {
    p = r1 = p;
    p = r2 = p;
    p = r3 = p;
    p = r4 = p;
  }
}

int main() {
  unsigned result = fn2();
  printf("Result: %u\n", result);
  return 0;
}