#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
c k;
e l;
volatile f m[5][8];
d fn3(p1) {
  a o;
  for (; /* Loop unrolled */;) {
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
  }
}

int main() {}
