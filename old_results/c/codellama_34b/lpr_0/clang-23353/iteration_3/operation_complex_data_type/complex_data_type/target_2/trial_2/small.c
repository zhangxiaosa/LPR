
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int fn1(char p1, char p2) {
  return p1 * p2;
}

int fn2(int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}

int main() {
  int i = 0;
  int j = 0;
  int *p2 = &i;
  int p3 = 1;

  fn2(p2, p3);
  printf("i = %d\n", i);
  printf("j = %d\n", j);
  return 0;
}
