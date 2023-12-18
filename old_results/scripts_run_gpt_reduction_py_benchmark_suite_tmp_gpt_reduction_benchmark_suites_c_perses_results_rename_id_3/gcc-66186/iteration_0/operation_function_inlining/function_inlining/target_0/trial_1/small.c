typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned short e;
typedef unsigned f;
c g;
c h;
e fn2(a, e, f);
b fn3(a, a, a, e, c);
f fn4(c, e, e, f, e);
c fn5() {
  c n = 1L;
  f o = 0x5A683F60L;

  c p1 = n;
  d p2 = g;
  e p3 = g;

  c s = 0x57638FF4L;
  c t = 1L;
  fn2(g, s, g);
  c returnValue = t;

  c s_fn1 = 0x57638FF4L;
  c t_fn1 = 1L;
  fn2(g, s_fn1, g);
  returnValue = t_fn1;

  o = returnValue;
  return o;
}
e fn2(a p1, e p2, f p3) {
  f u = 0x30A04A8FL;

  c p1_fn1 = g;
  d p2_fn1 = p2;
  e p3_fn1 = g;

  c s_fn1 = 0x57638FF4L;
  c t_fn1 = 1L;
  fn2(g, s_fn1, g);
  c returnValue_fn1 = t_fn1;

  c s = 0x57638FF4L;
  c t = 1L;
  fn2(g, s, g);
  c returnValue = t;

  t = returnValue_fn1;

  if (fn3(0x9A5DL, g, p2, u, p1))
    ;
  return 0;
}
b fn3(a p1, a p2, a p3, e p4,
                c p5) {
  c ad = -7L;
  a ae = 0xA3L;

  c p1_fn1 = ad;
  d p2_fn1 = 4294967287UL;
  e p3_fn1 = ad;

  c s_fn1 = 0x57638FF4L;
  c t_fn1 = 1L;
  fn2(g, s_fn1, g);
  c returnValue_fn1 = t_fn1;

  c s = 0x57638FF4L;
  c t = 1L;
  fn2(g, s, g);
  c returnValue = t;

  ae = returnValue_fn1;

  if (fn4(ad, 4294967287UL, ad, g, p5))
    ;
  return ae;
}
f fn4(c p1, e p2, e p3, f p4,
                 e p5) {
  b ak[8];
  for (p2 = 0; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;

  c p1_fn1 = ad;
  d p2_fn1 = 4294967287UL;
  e p3_fn1 = ad;

  c s_fn1 = 0x57638FF4L;
  c t_fn1 = 1L;
  fn2(g, s_fn1, g);
  c returnValue_fn1 = t_fn1;

  c s = 0x57638FF4L;
  c t = 1L;
  fn2(g, s, g);
  c returnValue = t;

  g = returnValue_fn1;

  return g;
}

int main() { fn5(); }
