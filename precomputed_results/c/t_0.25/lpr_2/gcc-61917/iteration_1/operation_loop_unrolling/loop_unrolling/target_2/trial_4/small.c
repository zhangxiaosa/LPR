#include <stdio.h>

unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  signed o;

  // Unrolled loop iteration 1
  for (; l; l++) {
    // Iteration 1 of the unrolled loop
    k = 0;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
  }

  // Unrolled loop iteration 2
  for (; l; l++) {
    // Iteration 2 of the unrolled loop
    k = 0;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
    k = k - 6;
    p1 = o - p1;
  }

  return p1;
}

int main() {}
