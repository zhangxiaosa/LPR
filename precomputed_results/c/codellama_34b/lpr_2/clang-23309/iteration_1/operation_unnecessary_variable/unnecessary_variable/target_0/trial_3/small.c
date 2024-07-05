
int fn1(unsigned char p1) {
  printf("checksum = %X\n", p1);
  return p1;
}
int fn2(unsigned char p1, unsigned char p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int fn6(unsigned char p1, unsigned char p2) { return p1 - p2; }
int p;
int t;
int v;
short w;
unsigned char ac = 1L;
int fn13() {
  for (w = 3; w; w -= 1) {
    t = ac || (w = 250UL) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(ao - fn4(fn6(1L, w), 0xECL), t) & 1UL)
      v = 1;
  }
  return 3;
}
int main() {
  fn13();
  p = v;
  fn1(p);
  return 0;
}
