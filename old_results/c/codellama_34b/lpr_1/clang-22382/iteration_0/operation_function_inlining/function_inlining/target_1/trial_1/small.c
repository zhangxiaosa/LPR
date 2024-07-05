
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

e fn2(p1) {
  struct h p;
  b q;
  p = (struct h){0};
  p.k = 3;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() { return 0; }
