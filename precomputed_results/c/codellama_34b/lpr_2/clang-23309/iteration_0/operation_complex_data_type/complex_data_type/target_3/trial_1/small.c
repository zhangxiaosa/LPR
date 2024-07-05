
void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p1 - p2; }
int p;
int t;
long v;
short w;
int ab;
short ac = 1L;
int fn13() {
  int al = 3L;
  long am = 1L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(ao - fn4(fn6(am, an), 0xECL), t) & 1UL)
      v = 1UL;
  }
  return al;
}
int main() {
  int ap = 0;
  fn13();
  p = v;
  fn1(p, ap);
  return 0;
}
