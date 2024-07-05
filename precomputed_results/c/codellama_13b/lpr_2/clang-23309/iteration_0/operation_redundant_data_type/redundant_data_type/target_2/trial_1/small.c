
typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

b fn2(b, b);
c fn3(c, c);
d fn4(d, d);
f fn5(f, f);
f fn6(f, f);

f p;
void fn7(f);
void fn9(g, char *, int);

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

int fn10(g, e);
int fn11(d, f, b, e);
a fn12(b, b, d, a, g);

b fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}

int fn10(g p1, e p2) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

int fn11(d p1, f p2, b p3, e p4) {
  c ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

a fn12(b p1, b p2, d p3, a p4, g p5) {
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
