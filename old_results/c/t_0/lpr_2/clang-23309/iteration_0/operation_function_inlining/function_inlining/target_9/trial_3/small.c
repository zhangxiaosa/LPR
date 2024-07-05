typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

b fn2(b p1, b p2) { return p1 - p2; }

c fn3(c p1, c p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

f p;

void fn7(p1) { p = p1; }

void fn8(p1) { fn7(p1); }

void fn9(g p1, char *p2, int p3) { fn8(p1); }

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;
d fn10(g, e);
d fn11(d, f, b, e);
a fn12(b, b, d, a, g);

b fn13() {
  e ae = 1UL;
  {
    b af = 0x2F2F6D26L;
    d ag = 248UL;
    {
      c ai = 7L;
      e aj = 1UL;
      {
        b al = 3L;
        c am = 1L;
        b an;
        for (w = 3; w; w -= 1)
          if (an = 250UL) {
            t = ac || (an = w) == 0x294A85636008822DLL;
            a ao = 0xBCD1L;
            if ((ao - (am - an)) - 0xECL - t & 1UL)
              v = 1UL - (ao - (am - an)) - 0xECL - t & 1UL;
          }
        ae = al;
      }
    }
  }
  return ae;
}

int main() {
  int ap = 0;
  {
    b ae = 1UL;
    {
      b af = 0x2F2F6D26L;
      d ag = 248UL;
      {
        c ai = 7L;
        e aj = 1UL;
        {
          b al = 3L;
          c am = 1L;
          b an;
          for (w = 3; w; w -= 1)
            if (an = 250UL) {
              t = ac || (an = w) == 0x294A85636008822DLL;
              a ao = 0xBCD1L;
              if ((ao - (am - an)) - 0xECL - t & 1UL)
                v = 1UL - (ao - (am - an)) - 0xECL - t & 1UL;
            }
          ae = al;
        }
      }
    }
  }
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}