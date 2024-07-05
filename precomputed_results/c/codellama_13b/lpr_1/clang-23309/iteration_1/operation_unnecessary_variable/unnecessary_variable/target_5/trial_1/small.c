
typedef int b;
typedef unsigned char d;
typedef short f;
void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
int p;
void fn9(unsigned p1, char *p2, int p3) { p = p1; }
int t;
unsigned u;
unsigned v;
short w;
f ab;
b ac = 3L;
short fn10(unsigned long, f);
short fn11(long, f, b, f);
short fn12(b, b, long, short, unsigned long);
int fn13() {
  f ae = 1UL;
  fn10(u, t);
  return ae;
}
short fn10(unsigned long p1, f p2) {
  short d = 0x2F2F6D26L;
  f ag = 248UL;
  fn11(2L, ag, p2, 1);
  return d;
}
short fn11(long p1, f p2, b p3, f p4) {
  f ao = 0xBCD1L;
  fn12(ao, ao, p1, 0, p1);
  return ao;
}
short fn12(b p1, b p2, long p3, short p4, unsigned long p5) {
  b an = 250UL;
  for (w = 3; w; w -= 1)
    if (an = w) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      f ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return 3L;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
