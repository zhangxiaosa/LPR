
#include <stdio.h>

// Original program
typedef short a;
typedef short b;
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
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(f p1, a p2, g p3, d p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
int main() {}

// Optimized program
typedef short a;
typedef short b;
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
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(f p1, a p2, g p3, d p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
int main() {}

// Optimized program with eliminated b
typedef short a;
typedef short b;
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
  fn1(l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(f p1, a p2, g p3, d p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
int main() {}
