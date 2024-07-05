typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned short e;
typedef unsigned f;
c g;
c h;
c fn1(e, d, e);
e fn2(a, e, f);
b fn3(a, a, a, e, c);
f fn4(c, e, e, f, e);
c fn5() {
  fn1(1L, g, g);
  return 0x5A683F60L;
}
c fn1(e p1, d p2, e p3) {
  fn2(g, 0x57638FF4L, g);
  return 1L;
}
e fn2(a p1, e p2, f p3) {
  if (fn3(0x9A5DL, g, p2, 0x30A04A8FL, p1))
    ;
  return 0;
}
b fn3(a p1, a p2, a p3, e p4, c p5) {
  if (fn4(-7L, 4294967287UL, -7L, g, p5))
    ;
  return 0xA3L;
}
f fn4(c p1, e p2, e p3, f p4, e p5) {
  for (p2 = 0; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          ;
  return g;
}
int main() { fn5(); }