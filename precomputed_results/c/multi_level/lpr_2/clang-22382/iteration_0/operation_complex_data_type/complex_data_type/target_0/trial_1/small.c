#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct h {
  int i;
  long int j;
  unsigned int k;
};

d l;

static struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, struct h p5);

e fn2(e p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {
  return 0;
}