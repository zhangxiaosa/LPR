long fn3(long p1, long p2) { return p1 - p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1; }

unsigned p;
void fn7(unsigned p1) { p = p1; }

long v;
short ac = 1L;

int main() {
  long am = 1L;
  int an;

  // First iteration
  {
    short w = 3;
    if (an = 250UL) {
      unsigned p2 = ac || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn3(ao, fn4(am - an, 0xECL)) - p2 & 1UL)
        v = 1UL;
    }
  }

  // Second iteration
  {
    short w = 2;
    if (an = 250UL) {
      unsigned p2 = ac || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn3(ao, fn4(am - an, 0xECL)) - p2 & 1UL)
        v = 1UL;
    }
  }

  // Third iteration
  {
    short w = 1;
    if (an = 250UL) {
      unsigned p2 = ac || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn3(ao, fn4(am - an, 0xECL)) - p2 & 1UL)
        v = 1UL;
    }
  }

  fn7(v);
  printf("checksum = %X\n", p);
  return 0;
}