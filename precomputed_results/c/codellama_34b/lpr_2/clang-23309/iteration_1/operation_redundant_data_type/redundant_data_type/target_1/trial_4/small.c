
int fn1(unsigned int p1) {
  printf("checksum = %X\n", p1);
  return p1;
}

int fn2(unsigned int p1, unsigned int p2) {
  return p1 - p2;
}

unsigned int fn4(unsigned int p1, unsigned int p2) {
  return p1;
}

int fn6(unsigned int p1, unsigned int p2) {
  return p1 - p2;
}

unsigned int p;
unsigned int t;
unsigned int v;
unsigned short w;
unsigned short ac = 1U;

unsigned int fn13() {
  unsigned int al = 3U;
  unsigned short an;
  for (w = 3; w; w -= 1) {
    an = 250U;
    t = ac || (an = w) == 0x294A85636008822DLL;
    unsigned short ao = 0xBCD1U;
    if (fn2(ao - fn4(fn6(1U, an), 0xECL), t) & 1U)
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
