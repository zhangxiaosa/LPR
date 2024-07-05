int fn2(int p1, int p2) { return p1 - p2; }
  long fn3(long p1, long p2) { return p1 - p2; }
  unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
  unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
  unsigned p;
  void fn7(int p1) { p = (unsigned)p1; }
  void fn8(int p1) { fn7(p1); }
  long v;
  short w;
  short ac = 1L;
  short fn12(int p1, unsigned p2, unsigned p3, unsigned p5) {
    long am = 1L;
    int an;
    for (w = 3; w; w -= 1) {
      if ((an = (unsigned long long)250UL)) {
        p2 = ac || (an = (unsigned long long)w) == 0x294A85636008822DLL;
        short ao = 0xBCD1L;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL) {
          v = 1UL;
        }
      }
    }
    return 0;
  }
  int main() {
    unsigned ag = 248UL;
    fn12(2L, ag, 0, 1);
    fn8(v);
    printf("checksum = %X\n", p);
    return 0;
  }