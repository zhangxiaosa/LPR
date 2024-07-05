#include <stdio.h>

int h;
int i;

int *fn2(unsigned p1, int *p2) {
  for (p1 = 6; p1 != -7; p1--)
    h ^= (p1 * i) & 1L;
  return p2;
}

int main() {
  return 0;
}
