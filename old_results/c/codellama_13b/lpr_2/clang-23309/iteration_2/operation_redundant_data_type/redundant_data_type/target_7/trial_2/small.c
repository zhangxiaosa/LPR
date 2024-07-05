
unsigned long fn2(unsigned long p1, unsigned long p2) { return p1 - p2; }
unsigned long fn3(unsigned long p1, unsigned long p2) { return p1 - p2; }
unsigned char fn4(unsigned long p1, unsigned long p2) { return p1; }
unsigned long fn5(unsigned long p1, unsigned long p2) { return p2; }
unsigned long fn6(unsigned long p1, unsigned long p2) { return p1 - p2; }
unsigned long p;
unsigned long t;
unsigned long v;
unsigned long w;
unsigned long ab;
unsigned long ac = 1L;
unsigned long fn10(unsigned long, unsigned long);
unsigned long fn12(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long fn13() {
  fn10(v, t);
  return 0;
}
unsigned long fn10(unsigned long p1, unsigned long p2) {
  fn12(2L, 248UL, p2, 1, p1);
  return 0x2F2F6D26L;
}
unsigned long fn12(unsigned long p1, unsigned long p2, unsigned long p3, unsigned long p4, unsigned long p5) {
  unsigned long al = 3L;
  unsigned long am = 1L;
  unsigned long an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    unsigned long ao = 0xBCD1L;
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
