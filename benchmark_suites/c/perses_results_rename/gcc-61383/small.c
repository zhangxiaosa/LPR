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
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1
             ? p1
             : p1 + p2;
}
a l;
f m;
d n;
static f o = 0x01B28DB7L;
c p;
c fn4(a, d, f);
e fn5(a);
e fn6() {
  b t = 0L;
  if (fn4(t, l, t)) {
  }
  return p;
}
c fn4(a p1, d p2, f p3) {
  if (fn5(l)) {
  }
  return p2;
}
e fn5(p1) {
  for (; n < 12; n = fn3(n, 3)) {
    c aa;
    if (0x4F92L <
        fn2(
            o | (aa = fn1(p1, p1)), 6)) {
    } else {
      a ab = 0xE3L;
      if (p1 <= ab)
        ;
      else if (aa)
        break;
    }
  }
  return m;
}
int main() { fn6(); }
