#include<iostream>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }

c fn3(c p1, c p2) {
  return (p1 && p2 && p1 > 2147483647 - p2) || (p1 < 0 && p2 < 0 && p1)
             ? p1
             : p1 + p2;
}

a l;
f m;
d n;
a o;
static f p = 0x01B28DB7L;

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    e temp;
    if (0x4F92L < (p | (temp = fn1(o, o)), 6)) {
      // do nothing
    } else {
      a temp2 = 0xE3L;
      if (o <= temp2) {
        // do nothing
      } else if (temp) {
        break;
      }
    }
  }
  return m;
}