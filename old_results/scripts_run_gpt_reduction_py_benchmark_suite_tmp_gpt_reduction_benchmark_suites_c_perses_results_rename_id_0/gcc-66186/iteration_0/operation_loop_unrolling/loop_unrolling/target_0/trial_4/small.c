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
e fn2(a p1, e p2, f p3) {
  f u = 0x30A04A8FL;
  if (fn3(0x9A5DL, g, p2, u, p1))
    ;
  return 0;
}
b fn3(a p1, a p2, a p3, e p4,
                c p5) {
  c ad = -7L;
  a ae = 0xA3L;
  if (fn4(ad, 4294967287UL, ad, g, p5))
    ;
  return ae;
}
f fn4(c p1, e p2, e p3, f p4,
                 e p5) {
  b ak[8];

  // Unrolled loop
  // Iteration 0
  p2 = 0;
  // Loop body

  // Iteration 1
  p2 = 1;
  // Loop body

  // Iteration 2
  p2 = 2;
  // Loop body

  // Iteration 3
  p2 = 3;
  // Loop body

  // Iteration 4
  p2 = 4;
  // Loop body

  // Iteration 5
  p2 = 5;
  // Loop body

  // Iteration 6
  p2 = 6;
  // Loop body

  // Iteration 7
  p2 = 7;
  // Loop body

  return g;
}

int main() { fn5(); }
