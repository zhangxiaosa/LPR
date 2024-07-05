
#include <stdio.h>

char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j;

int *fn2(int *p2, char p3) {
  int p2_value = *p2;
  int p3_value = (int)p3;
  for (p3_value = 6; p3_value != -7; p3_value--) {
    j ^= fn1(p3_value, i) && 1L;
  }
  return p2;
}

int main() { return 0; }
