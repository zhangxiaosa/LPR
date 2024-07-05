#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned char fn10(unsigned p1, short p2) {
  for (short w = 3; w; w -= 1) {
    if (250UL) {
      p2 = 1L - w == 0x294A85636008822DLL;
      if (fn2(fn3(0xBCD1L, fn4(1L - w, 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  }
  return 1;
}

int fn13() {
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}