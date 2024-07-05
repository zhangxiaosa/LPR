
short fn3(short p1, short p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
short fn5(short p1, short p2) { return p2; }
short fn6(short p1, short p2) { return p1 - p2; }
short p;
short t;
short v;
short w;
short ab;
short fn13() {
  fn12(2L, 248UL, p2, 1, 0x2F2F6D26L);
  return 0;
}
short fn12(short p1, short p2, short p3, short p4, short p5) {
  short al = 3L;
  short am = 1L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, 1L) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
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
