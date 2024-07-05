
#include <stdio.h>

unsigned l;
static unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4) {
  unsigned q;
w:;
  goto w;
}

unsigned fn2(unsigned p1) {
  unsigned q;
  fn1(q, l, p1, 3);
  for (;;) {
    unsigned r;
    q = r = q;
  }
}

int main() {}
