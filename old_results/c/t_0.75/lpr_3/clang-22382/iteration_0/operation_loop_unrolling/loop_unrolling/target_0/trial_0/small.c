#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct h {
  signed i;
  c j;
  unsigned k;
};

d l;

static struct h fn1(f, a, g, d, struct h);

e fn2(p1) {
  struct h p;
  b q;
  fn1(q, l, p1, 3, p);

  struct h r;

  // Unroll iteration 1
  p = r = p;

  // Unroll iteration 2
  p = r = p;

  // Unroll iteration 3
  p = r = p;

  // Unroll iteration 4
  p = r = p;

  // Continue with the rest of the function
}

struct h fn1(f p1, a p2, g p3, d p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}
