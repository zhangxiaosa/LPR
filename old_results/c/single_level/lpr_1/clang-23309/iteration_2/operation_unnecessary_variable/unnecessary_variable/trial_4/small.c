void fn1(p1) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;

void fn7(p1) { p = p1; }

unsigned t;

unsigned u;

long v;

short w;

unsigned ab;

short ac = 1L;

unsigned char fn10(unsigned, short);

unsigned char fn11(unsigned char, unsigned, int, short);

int fn13() {

  return 1UL;
}

unsigned char fn10(unsigned p1, short p2) {
  fn11(2L, p2, 1);
  return 0x2F2F6D26L;
}

unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4) {
  short ao = 0xBCD1L;
  long am = 1L;
  for (w = 3; w; w -= 1) {
    p2 = fn5(ab, ac) || (w == 0x294A85636008822DLL);
    if (fn2(fn3(ao, fn4(fn6(am, 250UL), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return 3L;
}

int main() {
  fn13();
  fn7(v);
  fn1(p);
  return 0;
}