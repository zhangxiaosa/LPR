
#include <stdio.h>

int fn1(char p1, char p2) {
  return p1 * p2;
}

int *fn2(int *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}

int main() {
  int i;
  int j;
  int *p2;
  char *p3;

  i = 5;
  j = 10;
  p2 = &i;
  p3 = &j;

  fn2(p2, p3);

  printf("i = %d\n", i);
  printf("j = %d\n", j);

  return 0;
}
