#include <stdio.h>

typedef char a;
typedef short c;
typedef int d;
typedef unsigned f;
typedef unsigned g;

a fn2(a p1, int p2) { return p1; }
c fn3(c p1, c p2) { return p2; }
g fn4(g p1, g p2) { return p1 + p2; }

f p;
g u;
g v[1][4];

c fn11() {
  d d = 2L;
  for (; u < 51; ++u) {
    g e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  }
  return 0L;
}

int main() {
  int i, j;
  fn11();
  p = v[0][0];
  p = v[0][1];
  p = v[0][2];
  p = v[0][3];
  printf("checksum = %X\n", p);
  return 0;
}