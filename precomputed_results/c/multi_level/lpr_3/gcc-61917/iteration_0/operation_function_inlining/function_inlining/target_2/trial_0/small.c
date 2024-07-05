#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m[5][8];

int main() {
  a o = 0x4FL;

  for (;;) {
    for (l = 0; l < 20; l++) {
      for (k = 0; k >= -27; k = k - 6) {
        o = o - o;
      }
    }
    o || m[2][5];
  }
}