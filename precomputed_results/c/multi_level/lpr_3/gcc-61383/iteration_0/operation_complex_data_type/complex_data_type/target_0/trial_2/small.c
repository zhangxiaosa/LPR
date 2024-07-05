#include <stdint.h>

int32_t fn1(int32_t p1, int32_t p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

int16_t fn2(int16_t p1, int32_t p2) {
  return p1;
}

int32_t fn3(int32_t p1, int32_t p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

int32_t main() {
  uint32_t m = 0;
  uint32_t n = 0;
  int32_t o = 0;
  static uint32_t p = 0x01B28DB7;

  for (; n < 12; n = fn3(n, 3)) {
    int32_t ab;
    if (0x4F92 < fn2(p | (ab = fn1(o, o)), 6))
      ;
    else {
      int32_t ac = 0xE3;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }

  return m;
}