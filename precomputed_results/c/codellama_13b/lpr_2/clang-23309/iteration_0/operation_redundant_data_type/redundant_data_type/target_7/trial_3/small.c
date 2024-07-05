
typedef short a;
typedef int c;
typedef long d;
typedef unsigned char e;
typedef short f;
typedef int g;

c fn2(c p1, c p2) { return p1 - p2; }
d fn3(d p1, d p2) { return p1 - p2; }
e fn4(e p1, e p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
f p;
void fn7(c p1) { p = p1; }
void fn9(c p1, char *p2, int p3) { fn7(p1); }
c t;
c u;
d v;
e w;
c ab;
e ac = 1L;
e fn10(c, e);
e fn11(d, f, b, e);
e fn12(b, b, e, a, g);
b fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}
e fn10(c p1, e p2) {
  c af = 0x2F2F6D26L;
  e ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
e fn11(d p1, f p2, b p3, e p4) {
  d ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
e fn12(b p1, b p2, e p3, a p4, g p5) {
  b al = 3L;
  d am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      e ao = 0xBCD1L;
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
