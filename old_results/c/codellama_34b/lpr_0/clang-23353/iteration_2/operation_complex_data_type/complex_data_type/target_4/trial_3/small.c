
#include <stdio.h>

char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j;

int *fn2(int *p2, char p3) {
  int p3_temp;
  for (p3_temp = 6; p3_temp != -7; p3_temp--) {
    j ^= fn1(p3_temp, i) && 1L;
  }
  return p2;
}

int main() { return 0; }
