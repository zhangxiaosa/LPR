#include <stdio.h>

unsigned p;
void fn7(p1) { p = p1; }
void fn8(p1) { fn7(p1); }
unsigned u;
long v;
short w;
short ac = 1L;
unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4);
unsigned fn10(unsigned p1, short p2) {
  int af = 0x2F2F6D26L;
  unsigned ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4) {
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = ac || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (((ao - (p2)) - (((((am - an)) - 0xECL))))) & 1UL)
        v = 1UL;
    }
  return 0;
}
int main() {
  unsigned u;
  long v;
  short w;
  short ac = 1L;
  unsigned char fn11(unsigned char p1, unsigned p2, int p3, short p4);  
  int af = 0x2F2F6D26L;
  unsigned ag = 248UL;
  long am = 1L;
  int an;
  short ao = 0xBCD1L;
  unsigned p;
  unsigned p2;

  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = ac || (an = w) == 0x294A85636008822DLL;
      if (((ao - (p2)) - (((((am - an)) - 0xECL))))) & 1UL)
        v = 1UL;
    }

  fn7(ag);
  fn7(1);
  printf("checksum = %X\n", p);
  return 0;
}