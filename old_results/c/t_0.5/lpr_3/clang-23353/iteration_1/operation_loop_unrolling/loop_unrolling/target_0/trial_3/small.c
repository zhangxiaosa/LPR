#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

unsigned i;
int j_h;

int fn2(p3) {
  // Unrolled loop
  p3 = 6;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = 5;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = 4;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = 3;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = 2;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = 1;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = 0;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = -1;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = -2;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = -3;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = -4;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = -5;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  p3 = -6;
  j_h ^= fn1(p3, i) && 1L;
  p3--;

  return 0;
}

int main() {
  return 0;
}