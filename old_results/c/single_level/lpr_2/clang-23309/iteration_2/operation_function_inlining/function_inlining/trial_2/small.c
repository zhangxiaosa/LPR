void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
void fn7(p1) { p = p1; }
void fn8(p1) { fn7(p1); }
void fn9(unsigned p1, char *p2, int p3) { fn8(p1); }
int t;
unsigned u;
long v;
short w;
unsigned char fn10(unsigned, short);
unsigned char fn11(unsigned char, unsigned, int, short);
short fn12(int, int, unsigned char, short, unsigned);
int fn13() {
  int af = 0x2F2F6D26L;
  unsigned ag = 248UL;
  unsigned char p1 = 2L;
  short p2 = 1;
  long p3 = 0;
  short p4 = 0;
  long p5 = 2L;
  int al = 3L;
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      t = p1 || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if ((ao - (ao - (p1 | p1))) & 1UL)
        v = 1UL;
    }
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