
#include <stdlib.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

int *fn2(int *p2, char p3) {
  p2 = (int *)malloc(sizeof(int));
  if (p2 == NULL) {
    return NULL;
  }
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  *p2 = j;
  return p2;
}

int main() {
  int *p2 = fn2(NULL, 0);
  if (p2 == NULL) {
    return 1;
  }
  free(p2);
  return 0;
}
