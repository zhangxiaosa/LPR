#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct k {
  f l;
};

struct m {
  signed n : 18;
  signed o : 1;
};

a p;
struct k q;
c r;
static a s = -5L;
g t;
c u;
g v;

d fn4() {
  r = q.l % (~(-5L) / 5);
}

int main() {
  fn4();
}