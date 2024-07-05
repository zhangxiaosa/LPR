#include <stdio.h>

int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn3(int p1, int p2) {
  return (p1 && p2 && p1 > 2147483647 - p2) || (p1 < 0 && p2 < 0 && p1) ? p1 : p1 + p2;
}

unsigned int fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92L < (ab = fn1(o, o), 6))
      ;
    else {
      int ac = 0xE3L;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }
}

int main() {
  fn6();
}