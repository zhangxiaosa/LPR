#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

b fn2(b p1, int p2) {
  return p1;
}

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

a l;
f m;
d n;
a o;
static f p = 0x01B28DB7L;
c q;

e fn6() {
  b u = 0L;
  for (; n = fn3(n, 3) < 12; n = fn3(n, 3)) {
    if (0x4F92L < (p | (o == 0 ? o : o % o))) {
      continue;
    } else {
      a ac = 0xE3L;
      if (o <= ac)
        ;
      else if ((p | (o == 0 ? o : o % o))) {
        break;
      }
    }
  }
  return m;
}

int main() {
  // Inlined code of fn6()
  {
    b u = 0L;
    for (; n = fn3(n, 3) < 12; n = fn3(n, 3)) {
      if (0x4F92L < (p | (o == 0 ? o : o % o))) {
        continue;
      } else {
        a ac = 0xE3L;
        if (o <= ac)
          ;
        else if ((p | (o == 0 ? o : o % o))) {
          break;
        }
      }
    }
  }
}