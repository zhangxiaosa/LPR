#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static unsigned fn1(unsigned p1, struct original_data_type p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  fn1(0, p);

  struct original_data_type r1, r2, r3, r4, r5;
  p = r1 = p;
  p = r2 = p;
  p = r3 = p;
  p = r4 = p;
  p = r5 = p;
}

int main() {}
