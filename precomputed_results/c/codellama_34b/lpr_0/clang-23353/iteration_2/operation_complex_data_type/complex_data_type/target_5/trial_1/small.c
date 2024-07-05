
#include <stdio.h>

char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j;

int *fn2(int *p2, char p3) {
  for (int p3_new = 6; p3_new != -7; p3_new--) {
    j ^= fn1(p3_new, i) && 1L;
  }
  return p2;
}

int main() { return 0; }
