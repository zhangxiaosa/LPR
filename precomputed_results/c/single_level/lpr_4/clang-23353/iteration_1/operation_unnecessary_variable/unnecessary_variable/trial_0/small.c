#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

signed j_h;
int main() {
  char p3;
  for (p3 = 6; p3 != -7; p3--)
    j_h ^= fn1(p3) && 1L;

  return 0;
}