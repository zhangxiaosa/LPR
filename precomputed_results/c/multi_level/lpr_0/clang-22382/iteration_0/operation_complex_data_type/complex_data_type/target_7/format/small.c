#include <stdio.h>

struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static struct original_data_type fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                                     struct original_data_type p5) {
  p5.k;

w:
  goto w;
}

unsigned fn2(unsigned p1) {
  struct original_data_type p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {
  return 0;
}