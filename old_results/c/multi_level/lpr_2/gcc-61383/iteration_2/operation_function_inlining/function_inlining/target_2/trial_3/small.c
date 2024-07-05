#include <stdio.h>

int fn1(int p1, int p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

int fn2(short p1) {
  return p1;
}

unsigned n;
int o;

int main() {
  for (; n < 12; ) {
    int ab;
    int p1 = n;
    int p2 = 3;
    int result;

    if (p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1)
      result = p1;
    else
      result = p1 + p2;

    if (0x4F92L < fn2(0x01B28DB7L | (ab = (p2 == 0 ? p1 : p1 % p2))))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;

    n = result;
  }

  return 0;
}