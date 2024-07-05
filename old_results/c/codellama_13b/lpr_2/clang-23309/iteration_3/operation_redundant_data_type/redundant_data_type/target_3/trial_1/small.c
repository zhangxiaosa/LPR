
#include <stdio.h>

unsigned short p1, p2;
unsigned short p3, p4, p5;
unsigned short an = 250UL;
unsigned short ac = 1L;
unsigned short v = 0;
unsigned short w;

unsigned short fn12(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
unsigned short fn13() {
  fn12(2L, 248UL, v, 1, 0x2F2F6D26L);
  return 0;
}
unsigned short fn12(unsigned short p1, unsigned short p2, unsigned short p3, unsigned short p4, unsigned short p5) {
  for (w = 3; w; w -= 1) {
    an = w;
    p2 = fn5(p2, ac) || (an == 0x294A85636008822DLL);
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return 3L;
}
int main() {
  fn13();
  p1 = v;
  printf("checksum = %X\n", p1);
  return 0;
}
