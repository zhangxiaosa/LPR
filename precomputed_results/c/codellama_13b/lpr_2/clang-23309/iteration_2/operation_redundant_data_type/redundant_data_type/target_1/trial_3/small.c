
#include <stdio.h>

typedef unsigned int uint;

uint fn2(uint p1, uint p2) { return p1 - p2; }
uint fn3(uint p1, uint p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
uint fn5(uint p1, uint p2) { return p2; }
uint fn6(uint p1, uint p2) { return p1 - p2; }
short p;
short t;
uint v;
short w;
uint ab;
short ac = 1L;
short fn10(uint, short);
short fn12(short, short, short, short, uint);
uint fn13() {
  fn10(v, t);
  return 0;
}
short fn10(uint p1, short p2) {
  fn12(2L, 248UL, p2, 1, p1);
  return 0x2F2F6D26L;
}
short fn12(short p1, short p2, short p3, short p4, uint p5) {
  short al = 3L;
  uint am = 1L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}
int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
