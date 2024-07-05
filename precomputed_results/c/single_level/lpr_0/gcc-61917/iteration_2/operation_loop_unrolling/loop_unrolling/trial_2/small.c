#include <stdio.h>

int main() {
  typedef int c;
  typedef unsigned d;
  typedef unsigned f;

  f fn2(f p1, f p2) {
    return p1 - p2;
  }

  c k;
  unsigned l;
  volatile f m[5][8];

  d fn3(f p1) {
    for (;;) {
      for (; l; l++) {
        p1 = fn2(0x4FL, p1);
        k = 0;
        p1 = fn2(0x4FL, p1);
        k = -24;
        p1 = fn2(0x4FL, p1);
        k = -48;
        p1 = fn2(0x4FL, p1);
        k = -72;
        p1 = fn2(0x4FL, p1);
        k = -96;
        p1 = fn2(0x4FL, p1);
      }

      p1 || m[2][5];
    }
  }

  fn3(0);
  return 0;
}