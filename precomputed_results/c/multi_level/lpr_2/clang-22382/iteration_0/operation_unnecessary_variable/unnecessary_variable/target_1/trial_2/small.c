#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned g;

struct h {
  signed i;
  c j;
  unsigned k;
};


d l;


static struct h fn1(a p2, g p3, d p4, struct h p5) {
  p5.k;
w:
  goto w;
}

e fn2() {
  struct h p;
  b q;
  fn1(l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
