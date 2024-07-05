#include <iostream>

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

static struct h fn1(f p1, g p3, d p4, struct h p5) {
  return p5;
}


e fn2() {
  struct h p;
  fn1(l, 0, 3, p);
}

int main() {
  fn2();
}
