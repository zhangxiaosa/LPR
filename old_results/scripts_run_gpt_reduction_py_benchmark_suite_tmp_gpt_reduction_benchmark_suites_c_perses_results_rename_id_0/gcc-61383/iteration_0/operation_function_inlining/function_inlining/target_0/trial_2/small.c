typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

b fn2(b p1, int p2) { return p1; }

c fn3(c p1, c p2) {
  return p1 && p2 && (p1 == 0 ? p1 : p1 % p2) > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
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
  if (0 == 0 ? 0 : 0 % l)
    ;
  return q;
}

c fn4(a p1, d p2, f p3) {
  if (o == 0 ? o : o % 0)
    ;
  return p2;
}

e fn5(a p1) {
  for (; n < 12; n = fn3(n, 3)) {
    c ab;
    if (0x4F92L < fn2(p | (ab = (p1 == 0 ? p1 : p1 % 0)), 6))
      ;
    else {
      a ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (p1 == 0 ? p1 : p1 % 0)
        break;
    }
  }
  return m;
}

int main() {
  fn6();
}