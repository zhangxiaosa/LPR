#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

signed h;
int i;

int main() {
  h ^= fn1(6, i) && 1;
  h ^= fn1(5, i) && 1;
  h ^= fn1(4, i) && 1;
  h ^= fn1(3, i) && 1;
  h ^= fn1(2, i) && 1;
  h ^= fn1(1, i) && 1;
  return 0;
}
