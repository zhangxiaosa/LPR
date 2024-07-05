
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Decomposed variables with primary data types
char p1 = 1;
char p2 = 2;
int i = 0;
int j = 0;

// Decomposed function
int fn1(char p1, char p2) {
  return p1 * p2;
}

int *fn2(int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
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
