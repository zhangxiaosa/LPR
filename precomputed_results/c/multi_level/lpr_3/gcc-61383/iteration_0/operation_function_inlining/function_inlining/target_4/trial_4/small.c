#include <stddef.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) {
  return p2 == 0 ? p1 : (p1 % p2 ? p1 % p2 : p1);
}

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

c fn4(a, d, f);
e fn5(a);
e fn6() {
  b u = 0L;
  if (n < 12) {
    c ab;
    if (0x4F92L < (p | (ab = (o == 0 ? o : (o % o ? o % o : o))), 6))
      ;
    else {
      a ac = 0xE3L;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}

c fn4(a p1, d p2, f p3) {
  if (n < 12) {
    c ab;
    if (0x4F92L < (p | (ab = (o == 0 ? o : (o % o ? o % o : o))), 6))
      ;
    else {
      a ac = 0xE3L;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return p2;
}

int main() { 
  b u = 0L;
  if (n < 12) {
    c ab;
    if (0x4F92L < (p | (ab = (o == 0 ? o : (o % o ? o % o : o))), 6))
      ;
    else {
      a ac = 0xE3L;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}