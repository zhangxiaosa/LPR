#include <stdio.h>

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned n;
int o;

short fn6() {
  n = n && 3 && n > 2147483647 - 3 || n < 0 && 3 < 0 && n ? n : n + 3;
  if (o <= 0xE3L)
    ;
  else if (o == 0 ? 0 : o % o)
    return 0;
  return 0;
}

int main() {
  fn6();
  return 0;
}