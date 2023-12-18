#include <stdio.h>

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned n;
int o;

short fn6() {
  for (; n < 12;) {
    int ab;
    int p1 = n;
    int p2 = 3;
    if (p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2)
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
    n = p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
  }
  return 0;
}

int main() {
  fn6();
}
