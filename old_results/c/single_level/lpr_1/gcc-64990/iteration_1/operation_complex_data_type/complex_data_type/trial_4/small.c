#include <stdio.h>

#define D_TYPE unsigned

typedef D_TYPE d;

static short g = 0x7EBAL;

int main() {
  d h = 0xCAL;
  short i;
  int j[5][5];
  D_TYPE k = 0xAF7C65D6L;
  static D_TYPE l;
  D_TYPE m[9][2][3];
  int n;

  D_TYPE fn1(signed, short, int, signed);
  signed fn2();

  D_TYPE fn3() {
    fn1(fn2(0), 7, 7, 0);
    return n;
  }

  D_TYPE fn1(signed p1, short p2, int p3, signed p4) {
    p1 || (m[1][0][1] = p1);
    return 2;
  }

  signed fn2(p1) {
    D_TYPE v[6][3][2];
    int w = 0x709BFC8AL;
    for (i = 0;;) {
      if (k)
        break;
      return v[g][l][l];
    }
    if (h)
      ;
    else
      return j[g][g];
    for (; p1;) {
    }
    return w;
  }

  fn1(fn2(0), 7, 7, 0);
  return n;
}