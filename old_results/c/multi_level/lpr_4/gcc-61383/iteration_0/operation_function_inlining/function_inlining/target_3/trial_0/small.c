#include <iostream>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

a l;
f m;
d n;
a o;
static f p = 0x01B28DB7L;
c q;

inline c fn4(a p1, d p2, f p3) {
  for (; n < 12; n = n && 3 && n > 2147483647 - 3 || n < 0 && 3 < 0 && n ? n : n + 3) {
    c ab;
    if (0x4F92L < (0x01B28DB7L | (ab = p1 == 0 ? 0 : 0 % p1), 6))
      ;
    else if (ab)
      break;
  }
  return 0;
}

inline e fn5(a p1) {
  for (; n < 12; n = n && 3 && n > 2147483647 - 3 || n < 0 && 3 < 0 && n ? n : n + 3) {
    c ab;
    if (0x4F92L < (0x01B28DB7L | (ab = p1 == 0 ? 0 : 0 % p1), 6))
      ;
    else if (ab)
      break;
  }
  return 0;
}

e fn6() {
  b u = 0L;
  if (fn5(o))
    ;
  return q;
}

int main() {
  fn6();
  return 0;
}
