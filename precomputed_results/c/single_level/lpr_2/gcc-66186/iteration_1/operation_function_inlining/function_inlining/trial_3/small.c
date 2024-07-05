typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned short e;
typedef unsigned f;
c g;
c h;
c fn1(e, d, e);
e fn2(signed, e, f);
f fn4(c, e, e, f, e);
c fn5() {
  c n = 1L;
  f o = 0x5A683F60L;
  {
    c p1 = n;
    d p2 = g;
    e p3 = g;
    c s = 0x57638FF4L;
    {
      signed p1 = g;
      e p2 = s;
      f p3 = g;
      {
        if (fn4(7L, 4294967287UL, -7L, g, p2))
          ;
        return 0;
      }
    }
    return 1L;
  }
}
c main() { fn5(); }
