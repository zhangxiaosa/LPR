#include <stdio.h>

short p2;
int q;
long j;
unsigned l;
unsigned p1;
unsigned p3;
unsigned p4;

struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:
  goto w;
}

e fn2(unsigned p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
