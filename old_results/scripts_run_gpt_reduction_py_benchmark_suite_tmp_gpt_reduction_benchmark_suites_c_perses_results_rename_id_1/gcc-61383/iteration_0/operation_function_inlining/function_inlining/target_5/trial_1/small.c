#include <iostream>

// Definitions
typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

// Function prototypes
a fn1(a p1, a p2);
c fn3(c p1, c p2);
e fn6();

// Global variables
a l;
f m;
d n;
a o;
static f p = 0x01B28DB7L;
c q;

// Function definitions
a fn1(a p1, a p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

e fn6() {
  for (; n < 12; n = (n && 3) && (n && 3) > 2147483647 - 3 || n < 0 && 3 < 0 && n ? n : n + 3) {
    c ab;
    if (0x4F92L < (p | (o == 0 ? o : o % 0)), 6)
      ;
    else {
      a ac = 0xE3L;
      if (o <= ac)
        ;
      else if (o == 0 ? o : o % 0)
        break;
    }
  }
  return m;
}

int main() {
  fn6();
}
