#include <stdio.h>

typedef signed int a;
typedef short b;
typedef int c;
typedef unsigned int d;
typedef unsigned int e;
typedef unsigned int f;

c k;
e l;
volatile f m[5][8];

d fn3(f p1) {
  a o = 0x4FL;
  for (l = 0; l < 20; l++) {
    for (k = 0; k >= -27; k = k - 6) {
      p1 = o - p1;
    }
  }
}

int main() {
  a o = 0x4FL;
  for (l = 0; l < 20; l++) {
    for (k = 0; k >= -27; k = k - 6) {
      o = o - m[2][5];
    }
  }
  return 0;
}