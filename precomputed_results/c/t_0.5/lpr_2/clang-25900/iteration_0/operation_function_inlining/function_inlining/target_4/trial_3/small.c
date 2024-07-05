#include <stdio.h>

typedef signed a;
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
  signed o : 1;
};

a p;
struct k q;
c r;
static a s = -5L;
g t;
c u;
g v;

int main() {
  struct m z;
  {
    struct m p2 = z;
    struct k p3 = q;
    struct k p4 = q;
    c p5 = q.l;
    {
      struct m ad = {1957};
      ad.o = 5;
      c af = t;
      r = af % (-5L / ad.o);
    }
  }
}