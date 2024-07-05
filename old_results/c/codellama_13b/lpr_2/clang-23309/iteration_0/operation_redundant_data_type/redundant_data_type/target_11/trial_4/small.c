c
typedef int b;
typedef int c;
typedef short e;
typedef int f;
typedef int g;

g fn2(g p1, g p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
short p;
void fn7(g p1) { p = p1; }
void fn9(g p1, char *p2, int p3) { fn7(p1); }
b t;
g u;
c v;
short w;
g ab;
short ac = 1L;
e fn10(g, e);
e fn11(unsigned char, f, b, e);
short fn12(b, b, e, short, g);
b fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}
short fn10(g p1, short p2) {
  g af = 0x2F2F6D26L;
  short ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
short fn11(unsigned char p1, f p2, b p3, short p4) {
  c ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(b p1, b p2, short p3, short p4, g p5) {
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
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
