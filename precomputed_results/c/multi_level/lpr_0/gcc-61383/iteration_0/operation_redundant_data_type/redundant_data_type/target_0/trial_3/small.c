#include <stdio.h>

typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

signed fn1(signed p1, signed p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

f m;
d n;
signed o;

e fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    c ab = fn1(o, o);
    signed ac = 0xE3L;
    if (o <= ac)
      ;
    else if (ab)
      break;
  }
  return m;
}

int main() {
  fn6();
}