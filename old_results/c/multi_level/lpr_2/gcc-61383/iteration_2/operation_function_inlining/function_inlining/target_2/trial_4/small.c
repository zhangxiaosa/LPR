#include <iostream>

int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
int fn2(short p1) { return p1; }

unsigned n;
int o;

int main() {
  for (; n < 12; n = (n > 2147483644) ? n : n + 3) {
    if (0x4F92L < fn2(0x01B28DB7L | fn1(o, o)))
      ;
    else if (o <= 0xE3L)
      ;
    else if (fn1(o, o))
      break;
  }
  return 0;
}