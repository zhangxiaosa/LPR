#include <stdio.h>

struct original_data_type {
  int i;
  long j;
};

unsigned l;

static struct original_data_type fn1(unsigned p1, short p2, unsigned p3,
                                     unsigned p4,
                                     struct original_data_type p5) {
  // Removed unused statement p5.k;
  goto w;
w:
  goto w; // Infinite loop
}

unsigned fn2(p1) {
  struct original_data_type p;
  int q;
  fn1(q, 0, p1, 3, p);
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}
