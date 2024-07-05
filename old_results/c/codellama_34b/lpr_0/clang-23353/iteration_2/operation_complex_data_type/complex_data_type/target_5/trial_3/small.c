
#include <stdio.h>

char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j;
int p3_init = 6;
int p3_end = -7;

int *fn2(int *p2, char p3) {
  for (p3 = p3_init; p3 != p3_end; p3--) {
    j ^= fn1(p3, i) ^ 1L;
  }
  return p2;
}

int main() { return 0; }
