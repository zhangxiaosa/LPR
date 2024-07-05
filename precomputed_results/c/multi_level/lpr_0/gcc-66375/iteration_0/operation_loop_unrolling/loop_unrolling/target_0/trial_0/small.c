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

int main() {
  int i, j;
  d d = 2L;

  // Unrolled loop iteration 1
  g e1[9];
  for (i = 0; i < 9; i++)
    e1[i] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e1[0]);

  // Unrolled loop iteration 2
  g e2[9];
  for (i = 0; i < 9; i++)
    e2[i] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e2[0]);

  // Unrolled loop iteration 3
  g e3[9];
  for (i = 0; i < 9; i++)
    e3[i] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e3[0]);

  // ... Repeat iterations until u < 51

  // Unrolled loop iteration n
  g en[9];
  for (i = 0; i < 9; i++)
    en[i] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), en[0]);

  // Rest of the code after loop unrolling
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];

  printf("checksum = %X\n", p);
  return 0;
}