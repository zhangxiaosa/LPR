void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
void fn7(p1) { p = p1; }
void fn8(p1) { fn7(p1); }
void fn9(unsigned p1, char *p2) { fn8(p1); }
unsigned t;
unsigned u;
long v;
short w;
short fn12(int p1, int p2, unsigned p3, short p4, unsigned p5) {
  int al = 3L;
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = p1 || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}
unsigned fn10(unsigned p1, short p2) {
  long ai = 7L;
  fn12(ai, ai, 2L, 0, 2L);
  return 0x2F2F6D26L;
}
int main() {
  fn10(u, t);
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
