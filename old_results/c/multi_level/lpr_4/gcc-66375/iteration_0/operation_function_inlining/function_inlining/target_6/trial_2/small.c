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

d d;
g u;
f v[1][4];

int main() {

  for (; u < 51; ++u) {
    for (int i = 0; i < 9; i++)
      ;
    p = v[0][3] = fn3(4L, v[0][3]);
  }

  for (int i = 0; i < 1; i++)
    for (int j = 0; j < 4; j++) {
      p = v[i][j];
    }

  printf("checksum = %X\n", p);
  return 0;
}