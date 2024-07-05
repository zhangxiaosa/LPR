#include <stdio.h>

typedef short b;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct k {
  f l;
};

struct m {
  signed n : 18;
};

struct k q;
c r;

g t;
c u;
g v;

b fn3(g p1) {
  struct m ad = {1957};
  ad.o = 5;
  c af = t;
  ad.o = u;
  r = af % (-5L / ad.o);
}

void fn2() {
  fn3(r);
}

d fn4() {
  struct m z;
  fn2();
}

int main() {
  fn4();
}