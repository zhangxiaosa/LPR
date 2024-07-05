#include <stdio.h>

unsigned char fn1(unsigned char p1, unsigned char p2) { return p1 * p2; }

unsigned int i;
unsigned int j_h;

int *fn2(unsigned int p1, int *p2, unsigned char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j_h ^= fn1(p3, i) && 1L;
  return p2;
}

int main() { return 0; }
