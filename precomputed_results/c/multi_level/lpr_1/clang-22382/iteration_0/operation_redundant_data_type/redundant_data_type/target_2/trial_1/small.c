#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static signed fn1(unsigned, short, unsigned, unsigned, signed);

signed fn2(p1) {
  signed p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    signed r;
    p = r = p;
  }
}

signed fn1(unsigned p1, short p2, unsigned p3, unsigned p4, signed p5) {
  // Remove reference to p5.k
w:;
  goto w;
}

int main() { return 0; }
