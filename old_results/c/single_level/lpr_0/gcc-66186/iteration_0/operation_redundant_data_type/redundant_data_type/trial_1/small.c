typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned short e;
typedef unsigned f;
c g;
c h;
c fn1(e, d, e);
e fn2(signed, e, f);
b fn3(signed, signed, signed, e, c);
c fn5() {
  c n = 1L;
  f o = 0x5A683F60L;
  fn1(n, g, g);
  return o;
}
c fn1(e p1, d p2, e p3) {
  c s = 0x57638FF4L;
  c t = 1L;
  fn2(g, s, g);
  return t;
}
e fn2(signed p1, e p2, f p3) {
  f u = 0x30A04A8FL;
  if (fn3(0x9A5DL, g, p2, u, p1))
    ;
  return 0;
}
b fn3(signed p1, signed p2, signed p3, e p4, c p5) {
  signed ae = 0xA3L;
  b ak[8];
  for (; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return ae;
}
int main() { fn5(); }
