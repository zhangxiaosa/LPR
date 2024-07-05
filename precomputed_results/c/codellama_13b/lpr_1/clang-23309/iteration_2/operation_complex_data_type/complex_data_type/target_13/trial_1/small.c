c
#include <stdio.h>

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

long fn3(long p1, long p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

short fn6(short p1, short p2) { return p1 - p2; }

short fn12(short p1, short p2, short p3, short p4, short p5) {
  long an;
  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      p2 = fn6(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an + 14), 0xECL)), p2) & 1UL)
        return 1UL;
    }
  }
  return 3L;
}

void fn9(unsigned v, char *s_170, int ap) {
  fn1(v, ap);
}

int main() {
  fn9(fn12(1UL, 1UL, 2L, 0, 2L), "g_170", 0);
  return 0;
}
