
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
  p = 5;
  t = 1957;
  u = 1;
  v = 0;

  r = t % (~s / u);
  v = r;
}
