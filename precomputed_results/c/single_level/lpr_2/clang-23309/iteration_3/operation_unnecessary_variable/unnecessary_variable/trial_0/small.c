void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }


int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;

void fn7(p1) { p = p1; }

void fn8(p1) { fn7(p1); }

void fn9(unsigned p1, char *p2) { fn8(p1); }

unsigned u;

long v;

unsigned char fn11(unsigned char, unsigned, int, short);

short fn12(int, int, unsigned char, short, unsigned);

unsigned fn10(unsigned p1, short p2) {
  fn11(2L, 248UL, p2, 1);
  return 0x2F2F6D26L;
}

unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4) {
  fn12(7L, 7L, p1, 0, p1);
  return 1UL;
}

short fn12(int p1, int p2, unsigned char p3, short p4, unsigned p5) {
  int an;
  for (unsigned short w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = p1 || (an = w) == 0x294A85636008822DLL;
      if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return 3L;
}

int main() {
  fn10(u, 0);
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}