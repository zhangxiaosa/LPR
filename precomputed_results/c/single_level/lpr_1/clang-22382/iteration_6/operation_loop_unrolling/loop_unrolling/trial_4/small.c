#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l = 0;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
  return p5;
}

unsigned fn2(unsigned p1) {
  struct h p;
  int q = 0;
  struct h result = fn1(q, l, p1, 3, p);
  return result.k;
}

int main() {
  return 0;
}