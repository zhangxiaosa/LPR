#include <iostream>

char fn1(char p1, char p2) { return p1 * p2; }

int main() {
  char p3;
  signed h;
  int i;

  // Loop unrolled 14 times
  h ^= fn1(6, i) && 1L;
  h ^= fn1(5, i) && 1L;
  h ^= fn1(4, i) && 1L;
  h ^= fn1(3, i) && 1L;
  h ^= fn1(2, i) && 1L;
  h ^= fn1(1, i) && 1L;
  h ^= fn1(0, i) && 1L;
  h ^= fn1(-1, i) && 1L;
  h ^= fn1(-2, i) && 1L;
  h ^= fn1(-3, i) && 1L;
  h ^= fn1(-4, i) && 1L;
  h ^= fn1(-5, i) && 1L;
  h ^= fn1(-6, i) && 1L;
  h ^= fn1(-7, i) && 1L;

  return 0;
}