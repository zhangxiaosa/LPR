#include <iostream>

signed fn2(signed p1, signed p2) {
  return p1;
}

signed fn3(signed p1, signed p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

signed n;
signed o;
static signed p = 0x01B28DB7L;

signed main() {
  for (; n < 12; n = fn3(n, 3)) {
    signed ab;
    if (0x4F92L < fn2(p | (ab = o == 0 ? o : o % o), 6))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }

  return 0;
}