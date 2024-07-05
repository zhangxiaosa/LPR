void fn1(int p1) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned int p1, unsigned int p2) { return p1; }

unsigned int fn5(unsigned int p1, unsigned int p2) { return p2; }

unsigned int fn6(unsigned int p1, unsigned int p2) { return p1 - p2; }

unsigned int p;

void fn7(int p1) { p = (unsigned int)p1; }

unsigned int t;

unsigned int u;

long v;

short w;

unsigned int ab;

short ac = (short)1L;

unsigned char fn10(unsigned int p1, short p2);

unsigned char fn11(unsigned char p1, unsigned int p2, int p3, short p4);

int fn13() {

  short ae = (short)1UL;

  fn10(u, t);

  return (int)ae;
}

unsigned char fn10(unsigned int p1, short p2) {

  unsigned int ag = (unsigned int)248UL;

  fn11((unsigned char)2L, ag, p2, (short)1);

  return (unsigned char)0x2F2F6D26L;
}

unsigned char fn11(unsigned char p1, unsigned int p2, int p3, short p4) {
  int an;
  short al = (short)3L;
  long am = (long)1L;

  for (w = (short)3; w; w -= 1)
    if (an = (int)250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = (short)0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), (unsigned int)0xECL)), p2) & (unsigned int)1UL)
        v = (long)1UL;
    }
  return (unsigned char)al;
}

int main() {
  fn13();
  fn7(v);
  fn1((int)p);
  return 0;
}