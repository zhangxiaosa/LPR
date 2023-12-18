typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn2(a p1, a p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

b fn3(b p1, int p2) {
  return p1;
}

c fn4(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

a l;
f m;
d n;
a o;
static f p = 0x01B28DB7L;
c q;

e fn5(a p1);

e fn6() {
  b u = 0L;
  if (fn4(u, l, u));
  return q;
}

e fn5(a p1) {
  for (; n < 12; n = fn4(n, 3)) {
    c ab;
    if (0x4F92L < fn3(p | (ab = (p1 == 0 ? p1 : p1 % p1)), 6));
    else {
      a ac = 0xE3L;
      if (p1 <= ac);
      else if (ab) break;
    }
  }
  return m;
}

int main() { 
  fn6();
}