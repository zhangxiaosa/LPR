#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef short e;

a fn1(a p1, a p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

a l;
d n;
a o;

e fn6() {
  // First iteration
  {
    c ab;
    if (0x4F92L < (ab = fn1(o, o), 6)) {
      // unrolled iteration 1
    } else {
      a ac = 0xE3L;
      if (o <= ac) {
        // unrolled iteration 1
      } else if (ab) {
        break;
      }
    }
  }

  // Second iteration
  {
    c ab;
    if (0x4F92L < (ab = fn1(o, o), 6)) {
      // unrolled iteration 2
    } else {
      a ac = 0xE3L;
      if (o <= ac) {
        // unrolled iteration 2
      } else if (ab) {
        break;
      }
    }
  }

  // Third iteration
  {
    c ab;
    if (0x4F92L < (ab = fn1(o, o), 6)) {
      // unrolled iteration 3
    } else {
      a ac = 0xE3L;
      if (o <= ac) {
        // unrolled iteration 3
      } else if (ab) {
        break;
      }
    }
  }

  // Fourth iteration
  {
    c ab;
    if (0x4F92L < (ab = fn1(o, o), 6)) {
      // unrolled iteration 4
    } else {
      a ac = 0xE3L;
      if (o <= ac) {
        // unrolled iteration 4
      } else if (ab) {
        break;
      }
    }
  }

  return l;
}

int main() {
  fn6();
}
