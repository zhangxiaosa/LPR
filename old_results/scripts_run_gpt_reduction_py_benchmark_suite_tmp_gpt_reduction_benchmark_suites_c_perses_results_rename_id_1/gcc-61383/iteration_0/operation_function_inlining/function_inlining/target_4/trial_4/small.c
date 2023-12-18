#include <stdio.h>

typedef signed int a;
typedef short b;
typedef int c;
typedef unsigned int d;
typedef short e;
typedef unsigned int f;

a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }

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
  if ((n < 12) && (n = (n && 3) && (n > 2147483647 - 3) || n < 0 && 3 < 0 && n ? n : n + 3), 0x4F92L < (p | (o % o), p | (o % o))
      && (o <= 0xE3L) && (o == 0 || o % o))
    ;
  return q;
}

int main() {
  b u = 0L;
  if ((n < 12) && (n = (n && 3) && (n > 2147483647 - 3) || n < 0 && 3 < 0 && n ? n : n + 3), 0x4F92L < (p | (o % o), p | (o % o))
      && (o <= 0xE3L) && (o == 0 || o % o))
    ;

  return q;
}
