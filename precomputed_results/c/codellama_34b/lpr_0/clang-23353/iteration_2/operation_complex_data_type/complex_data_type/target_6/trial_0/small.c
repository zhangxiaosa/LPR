
#include <stdio.h>

int p1;
int p2;
int p3;

char fn1(char p1, char p2) { return p1 * p2; }

int i;
int j;

int *fn2(int *p2, char p3) {
  int p3_start = 6;
  int p3_end = -7;
  for (int p3 = p3_start; p3 != p3_end; p3--) {
    j ^= fn1(p3, i) && 1L;
  }
  return p2;
}

int main() { return 0; }
