#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

int i;
int h;

void *fn2(unsigned p1, int *p2, char p3) {
  p3 = 6;  // Constant propagation optimization
  h = fn1(p3, i) && 1;  // Constant propagation and copy propagation optimization
  return p2;
}

int main() {
  return 0;
}