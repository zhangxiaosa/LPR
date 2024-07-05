void fn1(p1) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;
void fn7(p1) { p = p1; }

unsigned t;
long v;
short w;
unsigned ab;
short ac = 1L;

unsigned char fn11(unsigned char, unsigned, int, short);

int fn13() {
  unsigned ag = 248UL;
  return fn11(2L, ag, t, 1);
}

unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4) {
  int an;
  short al = 3L;
  long am = 1L;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822ULL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  fn13();
  fn7(v);
  fn1(p);
  return 0;
}