#include <stdio.h>

typedef char a;
typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

a fn2(a p1, int p2) { return p1; }

c fn3(c p1, c p2) { return p2; }

g fn4(g p1, g p2) { return p1 + p2; }

f p;

void fn5(p1) {
  p = p1;
}

void fn6(p1) {
  fn5(p1);
}

void fn7(g p1, char *p2, int p3) {
  fn6(p1);
}

f t;
g u;
g v[1][4];
e fn8(a, d);
g fn9(f, f, d, g, d);
d fn10(d, e, f, d);

c main() {
  a a = 0xFBL;
  d b = 0L;
  f t;
  g u;
  g v[1][4];
  e c;
  d d;

  c = 255UL;

  for (; u < 51; ++u) {
    g e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  }

  fn10(6, c, 1, t);

  printf("checksum = %X\n", t);

  int i, j;
  int f = 0;

  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      fn6(v[i][j]);

  fn1(p, f);

  return b;
}