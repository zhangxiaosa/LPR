
int fn1(p1) {
  printf("checksum = %X\n", p1);
  return p1;
}
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int fn6(int p1, int p2) { return p1 - p2; }
int p;
int t;
int v;
short w;
unsigned char ac = 1L;
int fn13() {
  int al = 3L;
  short an_high;
  short an_low;
  signed char an_sign;
  for (w = 3; w; w -= 1) {
    an_high = 250UL;
    an_low = w;
    an_sign = 0x294A85636008822DLL;
    t = ac || (an_high = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(ao - fn4(fn6(1L, an_high), 0xECL), t) & 1UL)
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
