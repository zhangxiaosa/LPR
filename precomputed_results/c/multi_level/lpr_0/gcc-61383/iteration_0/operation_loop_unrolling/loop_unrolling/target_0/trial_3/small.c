#include <iostream>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

f m;
d n;
a o;

e fn6() {
  // Unrolled loop
  c ab1 = fn1(o, o);
  a ac1 = 0xE3L;
  if (o > ac1 && ab1)
    return m;

  c ab2 = fn1(o, o);
  a ac2 = 0xE3L;
  if (o > ac2 && ab2)
    return m;

  c ab3 = fn1(o, o);
  a ac3 = 0xE3L;
  if (o > ac3 && ab3)
    return m;

  c ab4 = fn1(o, o);
  a ac4 = 0xE3L;
  if (o > ac4 && ab4)
    return m;

  c ab5 = fn1(o, o);
  a ac5 = 0xE3L;
  if (o > ac5 && ab5)
    return m;

  c ab6 = fn1(o, o);
  a ac6 = 0xE3L;
  if (o > ac6 && ab6)
    return m;

  c ab7 = fn1(o, o);
  a ac7 = 0xE3L;
  if (o > ac7 && ab7)
    return m;

  c ab8 = fn1(o, o);
  a ac8 = 0xE3L;
  if (o > ac8 && ab8)
    return m;

  c ab9 = fn1(o, o);
  a ac9 = 0xE3L;
  if (o > ac9 && ab9)
    return m;

  c ab10 = fn1(o, o);
  a ac10 = 0xE3L;
  if (o > ac10 && ab10)
    return m;

  c ab11 = fn1(o, o);
  a ac11 = 0xE3L;
  if (o > ac11 && ab11)
    return m;

  c ab12 = fn1(o, o);
  a ac12 = 0xE3L;
  if (o > ac12 && ab12)
    return m;

  // End of unrolled loop

  return m;
}

int main() {
  fn6();
}