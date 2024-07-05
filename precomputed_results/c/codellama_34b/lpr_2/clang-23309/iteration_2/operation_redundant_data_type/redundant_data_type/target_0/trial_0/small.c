
unsigned int fn2(unsigned int p1, unsigned int p2) { return p1 - p2; }
unsigned char fn4(unsigned int p1, unsigned int p2) { return p1; }
unsigned int p;
unsigned int t;
unsigned int v;
short w;
unsigned int ac = 1UL;
unsigned int fn13() {
  unsigned int al = 3UL;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    t = ac || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(ao - fn4(1UL - an, 0xECL), t) & 1UL)
      v = 1;
  }
  return al;
}
int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
