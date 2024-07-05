c
#include <stdio.h>
#include <stdlib.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned g;

int fn2(int p1, short p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
e fn5(e p1, e p2) { return p2; }
e fn6(d p1, e p2) { return p1 - p2; }
e p;
void fn9(int p1, char *p2, int p3) {
  p = p1;
}
int t;
e u;
c v;
a w;
e ab;
a ac = 1L;
d fn10(int, short);
d fn11(d, e, b, char);
a fn12(b, b, unsigned short, a, g);
int main() {
  int ap = 0;
  fn9(v, "g_170", ap);
  return 0;
}
