
#include <stdio.h>

char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j;

int *fn2(int *p2, char p3) {
  int temp;
  for (temp = 6; temp != -7; temp--) {
    j ^= fn1(temp, i) && 1L;
  }
  return p2;
}

int main() { return 0; }
