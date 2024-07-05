#include "stdio.h"

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
c fn4(a, d, f);

e fn6() {
  if (o) {}
  else {
    for (; n && l && (l > 2147483647 - l || l < 0 && l < 0 && l); n = n + 3) {
      if (0x4F92L < (p | (fn1(o, o)), 6)) {}
      else {
        if (o <= 0xE3L) {}
        else if (fn1(o, o))
          break;
      }
    }
  }
  return m;
}

c fn4(a p1, d p2, f p3) {
  if (o) {}
  return l;
}

int main() { fn6(); }
