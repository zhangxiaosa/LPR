
#include <stdio.h>

int fn1(int p1, int p2) {
  return p1 * p2;
}

int fn2(int *p2, int p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}

int main() {
  int i = 0;
  int j = 0;
  int *p2 = NULL;

  i = fn1(1, 2);
  j = fn1(i, 3);
  p2 = fn2(NULL, i);

  printf("i: %d\n", i);
  printf("j: %d\n", j);
  printf("p2: %p\n", p2);

  return 0;
}
