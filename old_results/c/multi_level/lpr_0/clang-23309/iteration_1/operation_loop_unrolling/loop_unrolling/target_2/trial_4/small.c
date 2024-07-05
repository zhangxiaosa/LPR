#include <stdio.h>

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;
long v;
short w;
short ac = 1L;

int fn13() {
  int af = 0x2F2F6D26L;
  long am = 1L;
  int an;

  for (w = 3; w; w -= 1) {
    an = 250UL; // Unroll 1: Replace the condition with the constant value

    unsigned p2 = ac || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;

    if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;

    an = 250UL; // Unroll 2: Replace the condition with the constant value

    p2 = ac || (an = w) == 0x294A85636008822DLL;
    ao = 0xBCD1L;

    if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;

    an = 250UL; // Unroll 3: Replace the condition with the constant value

    p2 = ac || (an = w) == 0x294A85636008822DLL;
    ao = 0xBCD1L;

    if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  return af;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}