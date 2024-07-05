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

g fn4(g p1, g p2) {
  return p1 + p2;
}

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

c fn11() {
  a a = 0xFBL;
  {
    e c = 255UL;
    d d = 2L;
    for (; u < 51; ++u) {
      g e[9];
      int i;
      for (i = 0; i < 9; i++)
        e[i] = 0x9EE7F9D1C772505BLL;
      d = fn4(fn2(v[0][3] = p2, 3), e[0]);  // Inlined `fn3` here
    }
  }
  return 0L;
}

int main() {
  int i, j;
  int f = 0;
  fn11();
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      fn6(v[i][j]);
  printf("checksum = %X\n", p);
  return 0;
}