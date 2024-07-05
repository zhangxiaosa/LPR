#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, unsigned p3, struct h p5);

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, p);

  struct h r1, r2, r3, r4, r5;  // Unrolled loop variables

  for (;;) {
    p = r1 = p;
    p = r2 = p;
    p = r3 = p;
    p = r4 = p;
    p = r5 = p;
  }
}

struct h fn1(unsigned p1, unsigned p3, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {
  unsigned result = fn2();
  printf("Result: %u\n", result);
  return 0;
}