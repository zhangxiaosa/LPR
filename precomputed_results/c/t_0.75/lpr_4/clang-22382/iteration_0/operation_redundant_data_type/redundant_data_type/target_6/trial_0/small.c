#include <stdio.h>

static signed long unsigned fn1(unsigned, short, unsigned, unsigned, unsigned);

signed long unsigned fn2(unsigned p1) {
  unsigned p;
  fn1(0, 0, p1, 3, p);
  for (;;) {
    unsigned r;
    p = r = p;
  }
}

static signed long unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, unsigned p5) {
w:;
  goto w;
}