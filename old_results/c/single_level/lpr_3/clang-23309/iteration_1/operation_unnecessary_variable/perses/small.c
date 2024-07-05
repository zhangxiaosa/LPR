void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
void fn9(unsigned p1, char *p2, int p3) { p = p1; }
int t;
unsigned u;
long v;
short w;
unsigned ab;
short ac = 1L;
unsigned char fn10(unsigned, short);
unsigned char fn11(unsigned char, unsigned, int, short);
short fn12(int, int, unsigned char, short, unsigned);
int fn13() {
  fn10(u, t);
  return 1UL;
}
unsigned char fn10(unsigned p1, short p2) {
  unsigned ag = 248UL;
  fn11(2L, ag, p2, 1);
  return 0x2F2F6D26L;
}
unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4) {
  long ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(int p1, int p2, unsigned char p3, short p4, unsigned p5) {
  int al = 3L;
  long am = 1L;
  int an;
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
  fn1(p, ap);
  return 0;
}
