typedef signed a;
typedef int c;
typedef unsigned d;
typedef short e;
a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }
c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
a l;
d n;
a o;
e fn6() {
  c ab;
  if (0x4F92L < (ab = fn1(o, o), 6))
    ;
  else {
    a ac = 0xE3L;
    if (o > ac)
      ;
    else if (ab)
      break;
  }
  if (n < 12) {
    c ab1;
    if (0x4F92L < (ab1 = fn1(o, o), 6))
      ;
    else {
      a ac1 = 0xE3L;
      if (o > ac1)
        ;
      else if (ab1)
        break;
    }
  }
  if (n < 9) {
    c ab2;
    if (0x4F92L < (ab2 = fn1(o, o), 6))
      ;
    else {
      a ac2 = 0xE3L;
      if (o > ac2)
        ;
      else if (ab2)
        break;
    }
  }
  // Unroll the loop for 12 iterations
  if (n < 6) {
    c ab3;
    if (0x4F92L < (ab3 = fn1(o, o), 6))
      ;
    else {
      a ac3 = 0xE3L;
      if (o > ac3)
        ;
      else if (ab3)
        break;
    }
  }
  if (n < 3) {
    c ab4;
    if (0x4F92L < (ab4 = fn1(o, o), 6))
      ;
    else {
      a ac4 = 0xE3L;
      if (o > ac4)
        ;
      else if (ab4)
        break;
    }
  }
  if (n < 0) {
    c ab5;
    if (0x4F92L < (ab5 = fn1(o, o), 6))
      ;
    else {
      a ac5 = 0xE3L;
      if (o > ac5)
        ;
      else if (ab5)
        break;
    }
  }
  return l;
}
int main() { fn6(); }
