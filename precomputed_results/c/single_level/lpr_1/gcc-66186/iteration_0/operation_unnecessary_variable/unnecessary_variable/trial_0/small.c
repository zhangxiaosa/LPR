typedef short b;
typedef int c;
typedef unsigned short e;
typedef unsigned f;
c g;
c h;
e fn2(signed, e, f);
b fn3(signed, signed, signed, e, c);
f fn4(c, e, e, f, e);
c fn5() {
  return 0;
}
e fn2(signed p1, e p2, f p3) {
  if (fn3(0x9A5DL, g, p2, 0x30A04A8FL, p1))
    ;
  return 0;
}
b fn3(signed p1, signed p2, signed p3, e p4, c p5) {
  if (fn4(-7L, 4294967287UL, -7L, g, p5))
    ;
  return 0xA3L;
}
f fn4(c p1, e p2, e p3, f p4, e p5) {
  if (h < 0)
    ;
  return g;
}
int main() { fn5(); }