
int b;
unsigned char d;
short f;
unsigned g;
void fn1(int p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
short fn4(short p1, short p2) { return p1; }
short fn5(short p1, short p2) { return p2; }
short fn6(short p1, short p2) { return p1 - p2; }
short p;
void fn9(unsigned p1, char *p2, int p3) { p = p1; }
int t;
short u;
unsigned v;
short w;
short ab;
short ac = 1L;
long fn10(unsigned, short);
long fn11(long, short, int, short);
short fn12(int, int, long, short, unsigned);
int fn13() {
  short ae = 1UL;
  fn10(v, t);
  return ae;
}
long fn10(unsigned p1, short p2) {
  long af = 0x2F2F6D26L;
  short ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
long fn11(long p1, short p2, int p3, short p4) {
  unsigned ai = 7L;
  short aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(int p1, int p2, long p3, short p4, unsigned p5) {
  int al = 3L;
  unsigned an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
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
