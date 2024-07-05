
unsigned char fn2(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned char fn3(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned char fn5(unsigned p1, unsigned p2) { return p2; }
unsigned char fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned short p;
unsigned short t;
unsigned short v;
unsigned short w;
unsigned short ab;
unsigned short ac = 1L;
unsigned short fn10(unsigned short, short);
unsigned short fn12(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
unsigned short fn13() {
  fn10(v, t);
  return 0;
}
unsigned short fn10(unsigned short p1, short p2) {
  fn12(2L, 248UL, p2, 1, p1);
  return 0x2F2F6D26L;
}
unsigned short fn12(unsigned short p1, unsigned short p2, unsigned short p3, unsigned short p4, unsigned short p5) {
  unsigned short al = 3L;
  unsigned short am = 1L;
  unsigned short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    unsigned short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}
int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
