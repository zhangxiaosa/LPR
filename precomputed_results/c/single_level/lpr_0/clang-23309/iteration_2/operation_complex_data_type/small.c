int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
void fn7(p1) { p = p1; }
void fn8(p1) { fn7(p1); }
void fn9(unsigned p1, unsigned p2, int p3) { fn8(p1); }
int t;
unsigned u;
long v;
short w;
short ac = 1L;
unsigned char fn11(unsigned char, unsigned, int, short);
short fn12(int, int, unsigned char, short, unsigned);
unsigned fn10(unsigned p1, short p2) {
  int af = 0x2F2F6D26L;
  unsigned ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
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
      p2 = ac || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}
int main() {
  int ap = 0;
  fn10(u, t);
  fn9(v, u, ap);
  printf("checksum = %X\n", p);
  return 0;
}
