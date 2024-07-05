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
short fn12(int, int, unsigned char, short, unsigned);

int main() {
  // Inlined code of fn13 function
  short ae = 1UL;

  unsigned char fn10(unsigned p1, short p2) {
    unsigned ag = 248UL;
    fn11(2L, ag, t, 1);
    return 0x2F2F6D26L;
  }

  unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4) {
    long ai = 7L;
    short aj = 1UL;
    
    short fn12(int p1, int p2, unsigned char p3, short p4, unsigned p5) {
      int al = 3L;
      long am = 1L;
      int an;
      for (w = 3; w; w -= 1)
        if (an = 250UL) {
          p2 = fn5(ab, 1L) || (an = w) == 0x294A85636008822DLL;
          short ao = 0xBCD1L;
          if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
            v = 1UL;
        }
      return al;
    }
    
    fn12(ai, ai, p1, 0, p1);
    return aj;
  }
  
  fn10(u, t);
  fn7(v);
  fn1(p);
  return 0;
}