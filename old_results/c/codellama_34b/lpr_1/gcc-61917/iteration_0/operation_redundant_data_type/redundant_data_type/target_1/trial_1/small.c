
#include <stdio.h>

typedef unsigned int d;

d fn2(d p1, d p2) { return p1 - p2; }

d k;
d l;
volatile d m[5][8];

d fn3(d p1) {
  d o = 0x4FL;
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = fn2(o, p1);
    p1 || m[2][5];
  }
}

int main() { return 0; }
