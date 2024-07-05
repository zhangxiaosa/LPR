#include <stdio.h>

typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned f;
typedef signed a;

signed fn1(signed p1, signed p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

short fn2(short p1, int p2) {
  return p1;
}

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

f m;
d n;
static f p = 0x01B28DB7L;

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    c ab;
    if (0x4F92L < fn2(p | (ab = fn1((signed)n, (signed)n)), 6))
      ;
    else {
      if (n <= (unsigned)0xE3L)
        ;
      else
        break;
    }
  }
  return m;
}
