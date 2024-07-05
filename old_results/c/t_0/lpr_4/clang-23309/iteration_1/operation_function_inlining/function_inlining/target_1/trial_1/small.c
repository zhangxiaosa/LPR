void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char fn4(char p1, char p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned p;
int t;
unsigned u;
long v;
short w;
unsigned ab;
short ac = 1L;

int fn13() {
  int af = 0x2F2F6D26L;
  unsigned an = 250UL;
  short ao = 0xBCD1L;

  for (w = 3; w; w -= 1) {
    if (an == 250UL) {
      unsigned p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      if (ao - fn4(1L - an, 0xECL) - p2 & 1UL)
        v = 1UL;
    }
  }

  return af;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}