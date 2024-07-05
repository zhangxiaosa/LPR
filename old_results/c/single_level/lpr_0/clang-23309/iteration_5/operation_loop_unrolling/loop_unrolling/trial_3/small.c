#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
void fn7(int p1) { p = p1; }
void fn8(int p1) { fn7(p1); }

long v;
short w;
short ac = 1L;
short fn12(int p1, int p2, unsigned p3, unsigned p5) {
  long am = 1L;
  int an;

  if (an = 250UL) {
    int p2_unrolled_1 = ac || (an = 3) == 0x294A85636008822DLL;
    int p2_unrolled_2 = ac || (an = 2) == 0x294A85636008822DLL;
    int p2_unrolled_3 = ac || (an = 1) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;

    if (fn2(fn3(ao, fn4(fn6(am, 3), 0xECL)), p2_unrolled_1) & 1UL)
      v = 1UL;

    if (fn2(fn3(ao, fn4(fn6(am, 2), 0xECL)), p2_unrolled_2) & 1UL)
      v = 1UL;

    if (fn2(fn3(ao, fn4(fn6(am, 1), 0xECL)), p2_unrolled_3) & 1UL)
      v = 1UL;
  }

  return 0;
}

int main() {
  unsigned ag = 248UL;
  fn12(2L, ag, 0, 1);
  fn8(v);
  printf("checksum = %X\n", p);
  return 0;
}