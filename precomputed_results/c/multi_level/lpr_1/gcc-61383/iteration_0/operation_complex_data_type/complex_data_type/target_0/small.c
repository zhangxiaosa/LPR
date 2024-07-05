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
  for (; n < 12; n = fn3(n, 3)) {
    c ab;
    if (0x4F92L < (ab = fn1(o, o), 6))
      ;
    else {
      a ac = 0xE3L;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return l;
}

int main() { fn6(); }
