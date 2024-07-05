
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int p;
int t;
int v;
short w;
unsigned ac = 1L;
int fn13() {
  int al = 3L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = ac || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(ao - fn4(1L - an, 0xECL), t) & 1UL)
      v = 1;
  }
  return al;
}
int main() {
  fn13();
  p = v;
  printf("checksum = %d\n", p);
  return 0;
}
