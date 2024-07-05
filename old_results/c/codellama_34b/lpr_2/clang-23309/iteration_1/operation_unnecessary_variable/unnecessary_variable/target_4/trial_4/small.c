
int main() {
  int v;
  short w;
  unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
  int fn6(int p1, int p2) { return p1 - p2; }
  int al = 3L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    if (fn2(0xBCD1L - fn4(fn6(1L, an), 0xECL), (an = w) == 0x294A85636008822DLL) & 1UL)
      v = 1;
  }
  printf("checksum = %X\n", v);
  return 0;
}
