#include <stdio.h>

unsigned fn2(int p1, int p2) { return p1 - p2; }
unsigned fn3(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned char fn4(int p1, int p2) { return p1; }

int main() {
  int an;
  short w;
  short ac = 1L;

  for (w = 3; w; w -= 1) {
    if (an = 250L) {
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(1L - an, 0xECL)), ac || (an = w) == 0x294A85636008822DLL) & 1L) {
        // p = 1L; // Optimized out
      }
    }
  }

  // printf("checksum = %llX\n", (long long)p); // Optimized out

  return 0;
}