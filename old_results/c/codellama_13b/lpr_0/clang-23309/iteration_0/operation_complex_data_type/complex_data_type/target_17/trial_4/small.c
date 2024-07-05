c
#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned g;

int fn2(int p1, int p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
e fn5(e p1, e p2) { return p2; }
e fn6(d p1, e p2) { return p1 - p2; }
e p;
void fn9(g p1, char *p2, int p3) { p = p1; }
int t;
e u;
c v;
a w;
e ab;
a ac = 1L;
d fn10(int, short);
d fn11(d, e, b, short);
a fn12(b, b, unsigned char, a, g);
int fn13() {
  short ae = 1UL;
  int p1 = 0x2F2F6D26L;
  return ae;
}
int main() {
  int ap = 0;
  int p1 = 0x2F2F6D26L;
  fn9(p1, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
