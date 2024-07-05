
int fn1(int p1) {
  printf("checksum = %X\n", p1);
  return p1;
}
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int fn6(int p1, int p2) { return p1 - p2; }
int p;
int t;
unsigned long v;
short w;
short ac = 1UL;
int fn13() {
  int al = 3UL;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = ac || (an = w) == 0x294A85636008822DUL;
    short ao = 0xBCD1UL;
    if (fn2(ao - fn4(fn6(1UL, an), 0xECL), t) & 1UL)
      v = 1UL;
  }
  return al;
}
int main() {
  fn13();
  p = v;
  fn1(p);
  return 0;
}
