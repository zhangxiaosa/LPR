#include <stdio.h>

short a;
int b;
long c;
unsigned d;
unsigned e;
unsigned f;
unsigned g;

struct h {
  signed int i;
  long j;
  unsigned int k;
};

d l;

static struct h fn1(unsigned f, short a, unsigned g, unsigned d, struct h);

e fn2(unsigned p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}
