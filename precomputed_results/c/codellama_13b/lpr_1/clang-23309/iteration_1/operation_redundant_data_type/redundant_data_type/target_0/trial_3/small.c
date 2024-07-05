
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short f;
typedef unsigned g;
void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
short fn5(short p1, short p2) { return p2; }
short fn6(short p1, short p2) { return p1 - p2; }
short p;
void fn9(unsigned g p1, char *p2, int p3) { p = p1; }
int t;
short u;
unsigned v;
short w;
short ab;
short ac = 1L;
int fn10(unsigned g, f);
int fn11(d, f, b, f);
short fn12(b, b, d, short, g);
int fn13() {
  int ae = 1UL;
  fn10(u, t);
  return ae;
}
int fn10(unsigned g p1, f p2) {
  int af = 0x2F2F6D26L;
  f ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
int fn11(d p1, f p2, b p3, f p4) {
  unsigned ai = 7L;
  f aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(b p1, b p2, d p3, short p4, g p5) {
  b al = 3L;
  unsigned an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      f ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
