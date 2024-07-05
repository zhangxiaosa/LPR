#include <stddef.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }

b fn2(b p1, int p2) { return p1; }

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
e fn5(a);
e fn6() {
  b u = 0L;
  if (fn5(o))
    ;
  return q;
}

c fn4(a p1, d p2, f p3) {
  if (fn5(o))
    ;
  return (p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1) ? p1 : p1 + p2;
}
e fn5(a p1) {
  for (; n < 12; n = (p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1) ? p1 : p1 + p2) {
    c ab;
    if (0x4F92L < fn2(p | (ab = (p2 == 0 ? p1 : p1 % p2)), 6))
      ;
    else {
      a ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}

int main() { for (; n < 12; n = (p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1) ? p1 : p1 + p2)
;
 }