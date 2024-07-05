
int fn1(unsigned long p1) {
  printf("checksum = %X\n", p1);
  return p1;
}
int fn2(unsigned long p1, unsigned long p2) { return p1 - p2; }
unsigned char fn4(unsigned long p1, unsigned long p2) { return p1; }
int fn6(unsigned long p1, unsigned long p2) { return p1 - p2; }
unsigned long p;
unsigned long t;
unsigned long v;
unsigned short w;
unsigned short ac = 1L;
int fn13() {
  unsigned long al = 3L;
  unsigned short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = ac || (an = w) == 0x294A85636008822DLL;
    unsigned short ao = 0xBCD1L;
    if (fn2(ao - fn4(fn6(1L, an), 0xECL), t) & 1UL)
      v = 1;
  }
  return al;
}
int main() {
  fn13();
  p = v;
  fn1(p);
  return 0;
}
