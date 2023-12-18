#include <stdio.h>

unsigned l;

static unsigned fn1(unsigned, short, unsigned, unsigned, unsigned long);

unsigned fn2(unsigned p1) {
  unsigned long p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    unsigned long r;
    p = r = p;
  }
}

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, unsigned long p5) {
  w:;
  goto w;
}

int main() { 
  return 0; 
}
