#include <stdio.h>

typedef char a;
typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

a fn2(a p1, int p2) {
  return p1;
}

c fn3(c p1, c p2) {
  return p2;
}

g fn4(g p1, g p2) {
  return p1 + p2;
}

f p;
f t;
g u;
g v[1][4];

void fn7(g p1, char *p2, int p3) {
  p = p1;
}

g inline_fn9(f p2) {
  e c = 255UL;
  d d = 2L;
  for (; u < 51; ++u) {
    g e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = v[0][3] = 4L;
    d = 3;
    d = v[0][3];
    d = e[0];
    d = fn2(v[0][3], d);
    d = fn3(4L, d);
    d = fn4(d, e[0]);
  }
  return p;
}

int main() {
  int i, j;
  int f = 0;

  {
    e c = 255UL;
    d d = 2L;
    for (; u < 51; ++u) {
      g e[9];
      int i;
      for (i = 0; i < 9; i++)
        e[i] = 0x9EE7F9D1C772505BLL;
      d = v[0][3] = 4L;
      d = 3;
      d = v[0][3];
      d = e[0];
      d = fn2(v[0][3], d);
      d = fn3(4L, d);
      d = fn4(d, e[0]);
    }
  }

  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];
  printf("checksum = %X\n", p);
  return 0;
}