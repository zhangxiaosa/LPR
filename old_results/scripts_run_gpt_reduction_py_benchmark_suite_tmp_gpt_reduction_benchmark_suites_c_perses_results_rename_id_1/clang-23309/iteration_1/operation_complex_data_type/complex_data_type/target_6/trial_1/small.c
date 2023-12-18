#include <stdio.h>

unsigned subtract(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;
unsigned u = 1; // Optimized: assign 1 directly to u
long v;
short w;
short ac = 1L;

int main() {
  long am = 1L;
  unsigned an;

  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      short ao = 0xBCD1;

      if ((ao - (subtract(am, an) - 0xECL)) - u & 1UL) {
        v = 1UL;
      }
    }
  }

  p = v;
  printf("checksum = %u\n", p);

  return 0;
}