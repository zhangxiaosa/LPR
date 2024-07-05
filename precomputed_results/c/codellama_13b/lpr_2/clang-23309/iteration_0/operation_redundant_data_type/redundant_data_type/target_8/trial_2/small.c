
typedef short a;
typedef int b;
typedef long d;
typedef unsigned char e;
typedef short f;
typedef int g;

g fn2(g p1, g p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p1 - p2; }
int p;
void fn7(long p1) { p = p1; }
void fn9(long p1, char *p2, int p3) { fn7(p1); }
int t;
long u;
long v;
short w;
long ab;
a ac = 1L;
e fn10(int, e);
e fn11(d, f, b, e);
a fn12(b, b, e, a, long);
b fn13() {
  e ae = 1UL;
  fn10(u, t);
  return ae;
}
e fn10(int p1, e p2) {
  long af = 0x2F2F6D26L;
  e ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
e fn11(d p1, f p2, b p3, e p4) {
  long ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
a fn12(b p1, b p2, e p3, a p4, long p5) {
  b al = 3L;
  long am = 1L;
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
