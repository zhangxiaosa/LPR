
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
  p = r = p;
  struct h s;
  r = s = r;
  struct h t;
  s = t = s;
  struct h u;
  t = u = t;
  struct h v;
  u = v = u;
  struct h w;
  v = w = v;
  struct h x;
  w = x = w;
  struct h y;
  x = y = x;
  struct h z;
  y = z = y;
}
struct h fn1(f p1, a p2, g p3, d p4,
                  struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {
  // your code goes here
  return 0;
}
