#include <stdio.h>

typedef char a;
typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

a fn2(a p1, int p2) { return p1; }
c fn3(c p1, c p2) { return p2; }
g fn4(g p1, g p2) { return p1 + p2; }
f p;
f t;
g u;
g v[1][4];

e fn8(a p1, d p2) {
  fn9(p2, p2, t, 18446744073709551613UL, t);
  return p1;
}

g fn9(f p1, f p2, d p3, g p4, d p5) {
  e c = 255UL;
  d d = 2L;
  for (; u &lt; 51; ++u) {
    g e[9];
    int i;
    for (i = 0; i &lt; 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  }
  return p2;
}

int main() {
  int i, j;
  int f = 0;

  {
    a a = 0xFBL;
    d b = 0L;
    p = t;
    b;
  }

  for (i = 0; i &lt; 1; i++)
    for (j = 0; j &lt; 4; j++)
      p = v[i][j];
  printf("checksum = %X\n", p);
  return 0;
}