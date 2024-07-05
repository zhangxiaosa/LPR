typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

b fn2(b p1, b p2) { return p1 - p2; }

c fn3(c p1, c p2) { return p1 - p2; }

d fn4(d p1, d p2) { return p1; }

f fn5(f p1, f p2) { return p2; }

f fn6(f p1, f p2) { return p1 - p2; }

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

b fn13() {
  e ae = 1UL;
  {
    b af = 0x2F2F6D26L;
    d ag = 248UL;
    c ai = 7L;
    e aj = 1UL;
    b al = 3L;
    c am = 1L;
    b an;
    for (w = 3; w; w -= 1)
      if (an = 250UL) {
        {
          f p1 = ab;
          f p2 = ac;
          f p3 = am;
          f p4 = an;
          f p5 = 0xECL;
          {
            f p1 = am;
            f p2 = an;
            f p3 = 0xECL;
            b p4 = af;
            f p5 = ab;
            {
              c p1 = ai;
              c p2 = fn4(fn6(am, an), 0xECL);
              {
                d p1 = ag;
                d p2 = fn6(am, an);
                d p3 = 0xECL;
                c p4 = ai;
                {
                  b p1 = af;
                  b p2 = fn3(ao, fn4(fn6(am, an), 0xECL));
                  {
                    f p1 = p3;
                    f p2 = p4;
                    f p3 = p5;
                    b p4 = p2;
                    {
                      b p1 = p4;
                      b p2 = p1 - p2;
                      if (p2 & 1UL)
                        v = 1UL;
                    }
                  }
                }
              }
            }
          }
        }
      }
  }
  return al;
}

int main() {
  int ap = 0;
  {
    e ae = 1UL;
    {
      f p1 = u;
      f p2 = t;
      {
        g p1 = v;
        char *p2 = "g_170";
        int p3 = ap;
        {
          g p1 = v;
          {
            g p1 = v;
            {
              g p1 = v;
              {
                g p1 = v;
                p = p1;
              }
            }
          }
        }
      }
    }
  }
  printf("checksum = %X\n", p);
  return 0;
}