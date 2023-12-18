#include <stdio.h>

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned m;
unsigned n;
int o;

int fn5(int p1) {
  for (; n < 12; n = fn3(n, 3)) {
    int ab = (p1 == 0) ? p1 : 0;
    if (0x4F92L < ab)
      ;
    else if (p1 <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return m;
}

int main() {
  if (fn5(o))
    ;
}