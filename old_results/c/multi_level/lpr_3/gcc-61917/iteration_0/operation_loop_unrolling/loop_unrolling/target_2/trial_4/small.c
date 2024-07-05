#include<stdio.h>

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

  for (;;) {
    for (; l; l++) {
      // Unrolled loop iteration 1
      p1 = o - p1;
      k = k - 6;

      // Unrolled loop iteration 2
      p1 = o - p1;
      k = k - 6;

      // Unrolled loop iteration 3
      p1 = o - p1;
      k = k - 6;

      // Unrolled loop iteration 4
      p1 = o - p1;
      k = k - 6;

      // Unrolled loop iteration 5
      p1 = o - p1;
      k = k - 6;
    }

    p1 || m[2][5];
  }
}

int main() {}
