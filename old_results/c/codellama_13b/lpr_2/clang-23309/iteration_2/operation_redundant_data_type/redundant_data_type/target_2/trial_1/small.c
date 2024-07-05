
unsigned char fn2(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned char fn3(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned char fn5(unsigned p1, unsigned p2) { return p2; }
unsigned char fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned char p;
unsigned char t;
unsigned char v;
unsigned char w;
unsigned char ab;
unsigned char ac = 1L;
unsigned char fn10(unsigned char, unsigned char);
unsigned char fn12(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);
unsigned char fn13() {
  fn10(v, t);
  return 0;
}
unsigned char fn10(unsigned char p1, unsigned char p2) {
  fn12(2L, 248UL, p2, 1, p1);
  return 0x2F2F6D26L;
}
unsigned char fn12(unsigned char p1, unsigned char p2, unsigned char p3, unsigned char p4, unsigned char p5) {
  unsigned char al = 3L;
  unsigned char am = 1L;
  unsigned char an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    unsigned char ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}
unsigned char main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
