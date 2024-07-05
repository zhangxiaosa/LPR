#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

int main() {
  char p3;
  unsigned temp;
  int i = 0;
  signed j_h = 0;

  p3 = 6;

  temp = fn1(p3, i) && 1L;
  j_h ^= temp;

  p3--;
  temp = fn1(p3, i) && 1L;
  j_h ^= temp;

  p3--;
  temp = fn1(p3, i) && 1L;
  j_h ^= temp;

  p3--;
  temp = fn1(p3, i) && 1L;
  j_h ^= temp;

  p3--;
  temp = fn1(p3, i) && 1L;
  j_h ^= temp;

  return 0;
}