#include <stdio.h>

char fn1(char p1, char p2) { return p1 * p2; }

signed j_h;
int i;

int main() {
  char p3;

  p3 = 6;
  j_h ^= fn1(p3, i) && 1;

  p3 = 5;
  j_h ^= fn1(p3, i) && 1;

  p3 = 4;
  j_h ^= fn1(p3, i) && 1;

  p3 = 3;
  j_h ^= fn1(p3, i) && 1;

  p3 = 2;
  j_h ^= fn1(p3, i) && 1;

  p3 = 1;
  j_h ^= fn1(p3, i) && 1;

  p3 = 0;
  j_h ^= fn1(p3, i) && 1;

  p3 = -1;
  j_h ^= fn1(p3, i) && 1;

  p3 = -2;
  j_h ^= fn1(p3, i) && 1;

  p3 = -3;
  j_h ^= fn1(p3, i) && 1;

  p3 = -4;
  j_h ^= fn1(p3, i) && 1;

  p3 = -5;
  j_h ^= fn1(p3, i) && 1;

  p3 = -6;
  j_h ^= fn1(p3, i) && 1;

  return 0;
}