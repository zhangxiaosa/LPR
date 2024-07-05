#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

int main() {
  char p1 = 6;
  char p2 = -7;
  signed int h;
  int i;
  int j;

  for (char p3 = p1; p3 != p2; p3--) {
    h ^= fn1(p3, i) && 1L;
  }

  return 0;
}
