#include <iostream>

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

int main() {
  struct h p;
  b q;
  struct h p5;

  p5.k;

w:
  struct h r;
  p = r = p;

  goto w;
}

struct h fn1(f p1, a p2, g p3, d p4, struct h p5) {
  p5.k;

w:
  goto w;
}
