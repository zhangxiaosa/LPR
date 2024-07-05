#include <stdio.h>

typedef unsigned f;
typedef unsigned g;

c fn3(c p1, c p2) {
  return p2;
}

g fn4(g p1, g p2) {
  return p1 + p2;
}

f p;
g u;
g v[1][4];

int main() {
  g u = 0;
  {
    g e[9];
    g d = 2L;
    for (; u < 51; ++u) {
      for (int i = 0; i < 9; i++) {
        e[i] = 0x9EE7F9D1C772505BLL;
      }
      d = v[0][3] = 4L + d;
      d = d + e[0];
    }
  }

  for (int i = 0; i < 1; i++) {
    for (int j = 0; j < 4; j++) {
      p = v[i][j];
    }
  }

  printf("checksum = %X\n", p);
  return 0;
}