typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }
b fn2(b p1, int p2) { return p1; }
c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
a l;
f m;
d n;
a o;
static f p = 0x01B28DB7L;
c q;

e fn6() {
  b u = 0L;
  for (; n < 12; n = fn3(n, 3)) {
    c ab;
    if (0x4F92L < fn2(p | (ab = (o == 0 ? o : o % o)), 6))
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

int main() {
  if (b u = 0L; n < 12; n = c ab; if (0x4F92L < b p | b q = (a o == 0 ? (a o) : (a o) % (a o)), int p2 = 6))
      ;
    else {
      a ac = 0xE3L;
      if (a o <= ac)
        ;
      else if (b q)
        break;
    })
    ;
}