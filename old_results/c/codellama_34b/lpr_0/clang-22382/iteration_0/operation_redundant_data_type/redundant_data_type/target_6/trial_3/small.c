
#include <stdio.h>

typedef short a;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct h {
  signed i;
  long j;
  unsigned k;
};

e fn2(p1) {
  struct h p;
  f q;
  fn1(q, 3, p1, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(f p1, a p2, g p3, struct h p5) {
  p5.j;
w:;
  goto w;
}

int main() {}
