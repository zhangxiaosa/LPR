long fn1(long p1, long p2) { return p1 - p2; }
unsigned fn2(unsigned p1, unsigned p2) { return p1; }
unsigned e;
long f;
short g;
short a = 1L;
unsigned int main() {
  short h;
  long b = 1L;
  unsigned int c;
  for (g = 3; g; g -= 1)
    if (c == 250U) {
      h = a || (c = (unsigned short)g) == 0x294A85636008822ULL;
      short d = 0xBCD1L;
      if (fn1(d, fn2(b - c, 0xECL)) - h & 1UL)
        f = 1UL;
    }
  e = f;
  printf("checksum = %X\n", e);
  return 0;
}