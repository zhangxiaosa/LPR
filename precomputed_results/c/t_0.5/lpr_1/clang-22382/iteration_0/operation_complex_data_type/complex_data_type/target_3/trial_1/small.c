#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, unsigned, unsigned, signed, long, unsigned);

unsigned fn2(unsigned p1) {
  signed i;
  long j;
  unsigned k;
  int q;
  fn1(q, l, p1, 3, i, j, k);
  for (;;) {
    signed i;
    long j;
    unsigned k;
    struct h r;
    i = r.i = i;
    j = r.j = j;
    k = r.k = k;
  }
}

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, signed i, long j, unsigned k) {
w:;
  goto w;
}

int main() { return 0; }
