#include <stdio.h>

typedef char a;
typedef short c;
typedef int d;
typedef unsigned f;
typedef unsigned g;

a fn2(a p1, int p2) { return p1; }
c fn3(c p1, c p2) { return p2; }

f p;
g u;
g v[1][4];

c fn11() {
  d b = 0L;
  d d = 2L;
  for (; u < 51; ++u) {
    g e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    e[1] = 0x9EE7F9D1C772505BLL;
    e[2] = 0x9EE7F9D1C772505BLL;
    e[3] = 0x9EE7F9D1C772505BLL;
    e[4] = 0x9EE7F9D1C772505BLL;
    e[5] = 0x9EE7F9D1C772505BLL;
    e[6] = 0x9EE7F9D1C772505BLL;
    e[7] = 0x9EE7F9D1C772505BLL;
    e[8] = 0x9EE7F9D1C772505BLL;
    d = fn2(v[0][3] = fn3(4L, d), 3) + e[0];
  }
  return b;
}

int main() {
  int i, j;
  fn11();

  // Unrolled loop
  i = 0;

  p = v[i][0];
  p = v[i][1];
  p = v[i][2];
  p = v[i][3];
  p = v[i][4];
  p = v[i][5];
  p = v[i][6];
  p = v[i][7];
  p = v[i][8];

  printf("checksum = %X\n", p);

  return 0;
}