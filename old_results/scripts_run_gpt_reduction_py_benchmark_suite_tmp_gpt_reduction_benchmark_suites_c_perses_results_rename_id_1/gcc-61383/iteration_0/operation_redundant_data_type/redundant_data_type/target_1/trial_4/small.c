#include <stdio.h>

signed fn1(signed p1, signed p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

signed fn3(signed p1, signed p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

signed m;
signed n
signed o;
signed q;

signed fn5(signed p1) {
  for (; n < 12; n = fn3(n, 3)) {
    signed ab;
    if (0x4F92L < (ab = fn1(p1, p1), 6))
      ;
    else {
      signed ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}

signed fn6() {
  if (fn5(o))
    ;
  return q;
}

signed main() {
  fn6();
  return 0;
}