
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Decomposed variables
int p1_value = 0;
int p2_value = 0;
int p3_value = 0;

// Decomposed functions
int fn1(int p1, int p2) {
  return p1 * p2;
}

int* fn2(int* p2, int p3) {
  for (p3 = 6; p3 != -7; p3--) {
    p2[p3] = fn1(p3, i) && 1L;
  }
  return p2;
}

int main() {
  i = 0;
  j = 0;
  fn2(&i, 1);
  printf("i = %d\n", i);
  printf("j = %d\n", j);
  return 0;
}
