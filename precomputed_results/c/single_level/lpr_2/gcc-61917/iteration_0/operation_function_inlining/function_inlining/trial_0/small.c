#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

typedef unsigned VolatileFArray[5][8];

b fn1(b p1, b p2) {
  return p1 - p2;
}

f fn2(f p1, f p2) {
  return p1 - p2;
}

int main() {
  c k;
  e l;
  VolatileFArray m;
  a o = 0x4FL;
  f p1;

  for (;;) {
    for (l = 0; l < 20; l++) {
      for (k = 0; k >= -27; k = fn1(k, 6)) {
        p1 = fn2(o, p1);
      }
    }

    if (!(p1 || m[2][5])) {
      break;
    }
  }

  return 0;
}
