typedef unsigned char d_orig;

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

d_orig fn4(d_orig p1, d_orig p2) { return p1; }

unsigned p;
int t;
unsigned u;
long v;
short w;
short ac = 1L;

d_orig fn10(unsigned p1, short p2) {
  int an;
  short ao;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = ac || (an = w) == 0x294A85636008822DLL;
      ao = 0xBCD1L;
      if ((fn3(ao, fn4(1L - an, 0xECL)) - p2) & 1UL)
        v = 1UL;
    }
  return 0x2F2F6D26L;
}

int main() {
  int ap = 0;
  int an;
  short ao;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      t = ac || (an = w) == 0x294A85636008822DLL;
      ao = 0xBCD1L;
      if (((ao - (1L - t)) & 1UL) & 1UL)
        p = 1UL;
    }
  printf("checksum = %X\n", p);
  return 0;
}