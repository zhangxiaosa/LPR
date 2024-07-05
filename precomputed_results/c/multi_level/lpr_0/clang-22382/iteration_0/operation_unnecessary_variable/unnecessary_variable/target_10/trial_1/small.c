#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static struct original_data_type fn1(unsigned p1, short p2, struct original_data_type p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  fn1(0, 0, p);
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}
