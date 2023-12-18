#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

static struct original_data_type fn1(unsigned p1, struct original_data_type p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct original_data_type p;
  p.k;
w:
  goto w;

loop_start:
  p = p;
  goto loop_start;
}

int main() {
  return 0;
}