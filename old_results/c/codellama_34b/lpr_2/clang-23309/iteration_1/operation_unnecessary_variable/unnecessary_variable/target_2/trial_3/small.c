
int fn1(p1) {
  printf("checksum = %X\n", p1);
  return p1;
}
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int fn6(int p1, int p2) { return p1 - p2; }
int p;
int v;
short w;
unsigned ac = 1L;
int fn13() {
  int al = 3L;
  for (w = 3; w; w -= 1) {
    if (fn2(0xBCD1L - fn4(fn6(1L, w), 0xECL), w == 0x294A85636008822DLL) & 1UL)
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
