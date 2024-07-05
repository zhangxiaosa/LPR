#include <stdio.h>

short i;
long j;
unsigned k;

static unsigned fn1(unsigned, short, unsigned, unsigned, unsigned);

unsigned fn2(unsigned p1) {
  unsigned p;
  fn1(0, 0, p1, 3, p);
  for (;;) {
    p = p;
  }
}

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, unsigned p5) {
  p5;
w:;
  goto w;
}