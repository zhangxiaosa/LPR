
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
unsigned f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
f p;
void fn7(f p1) { p = p1; }
void fn9(g p1, char *p2, int p3) { fn7(p1); }
unsigned b t;
unsigned f u;
unsigned c v;
unsigned a w;
unsigned f ab;
unsigned short ac = 1L;
unsigned short fn10(unsigned g, unsigned short);
unsigned short fn11(unsigned, unsigned short, unsigned short, unsigned short);
unsigned short fn12(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
unsigned short fn13() {
  unsigned short ae = 1UL;
  fn10(u, t);
  return ae;
}
unsigned short fn10(unsigned g p1, unsigned short p2) {
  unsigned short af = 0x2F2F6D26L;
  unsigned short ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
unsigned short fn11(unsigned d p1, unsigned short p2, unsigned short p3, unsigned short p4) {
  unsigned short ai = 7L;
  unsigned short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
unsigned short fn12(unsigned short p1, unsigned short p2, unsigned short p3, unsigned short p4, unsigned short p5) {
  unsigned short al = 3L;
  unsigned short am = 1L;
  unsigned short an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      unsigned short ao = 0xBCD1L;
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
