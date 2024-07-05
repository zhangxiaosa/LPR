
#include <stdio.h>

char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j;
int p2;
int p3;

int *fn2(int *p2, char p3) {
  for (int i = 0; i < 6; i++) {
    j ^= fn1(p3, i) && 1L;
  }
  return p2;
}

int main() { return 0; }
