#include <iostream>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

f m;
d n;
a o;

e fn6() {
  c ab1;
  if (0x4F92L < (ab1 = fn1(o, o), 6))
    ;
  else {
    a ac1 = 0xE3L;
    if (o > ac1)
      ;
    else if (ab1)
      return m;
  }

  c ab2;
  if (0x4F92L < (ab2 = fn1(o, o), 6))
    ;
  else {
    a ac2 = 0xE3L;
    if (o > ac2)
      ;
    else if (ab2)
      return m;
  }

  c ab3;
  if (0x4F92L < (ab3 = fn1(o, o), 6))
    ;
  else {
    a ac3 = 0xE3L;
    if (o > ac3)
      ;
    else if (ab3)
      return m;
  }

  c ab4;
  if (0x4F92L < (ab4 = fn1(o, o), 6))
    ;
  else {
    a ac4 = 0xE3L;
    if (o > ac4)
      ;
    else if (ab4)
      return m;
  }

  return m;
}

int main() {
  fn6();
}