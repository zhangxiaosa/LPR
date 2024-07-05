#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

static long fn1(unsigned, short, unsigned, unsigned, long);

unsigned fn2(p1) {
  long p;
  int q;
  fn1(q, p1, p, 3, p);
  for (;;) {
    long r;
    p = r = p;
  }
}

long fn1(unsigned p1, short p2, unsigned p3, unsigned p4, long p5) {
  p5.k;
w:;
  goto w;
}

int main() { return 0; }
