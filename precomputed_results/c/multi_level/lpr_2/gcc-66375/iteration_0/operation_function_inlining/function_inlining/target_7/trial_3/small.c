#include <stdio.h>

typedef char a;
typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

a fn2(a p1, int p2) { return p1; }
f p;
f t;
g u;
g v[1][4];
e fn8(a, d);
g fn9(f, f, d, g, d);

c fn11() {
  a a = 0xFBL;
  d b = 0L;

  {
    e c = 255UL;
    d d = 2L;
    for (; u < 51; ++u) {
      g e[9];
      int i;
      for (i = 0; i < 9; i++)
        e[i] = 0x9EE7F9D1C772505BLL;
      d = (fn2(v[0][3] = d, 3)) + e[0];
    }
    b = t;
  }

  return b;
}

e fn8(a p1, d p2) {
  fn9(p2, p2, t, 18446744073709551613UL, t);
  return p1;
}

g fn9(f p1, f p2, d p3, g p4, d p5) {
  e c = 255UL;
  d d = 2L;

  {
    e c = 255UL;
    d d = 2L;
    for (; u < 51; ++u) {
      g e[9];
      int i;
      for (i = 0; i < 9; i++)
        e[i] = 0x9EE7F9D1C772505BLL;
      d = (fn2(v[0][3] = d, 3)) + e[0];
    }
    p3 = p2;
    p4 = p2;
    p5 = t;
  }

  return p2;
}

int main() {
  int i, j;
  int f = 0;

  // Inline the fn6 function call
  {
    // Body of the fn6 function
    f = fn9(t, t, t, t, t);
  }

  // Rest of the code
  fn11();
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      p = v[i][j];
  printf("checksum = %X\n", p);
  return 0;
}
