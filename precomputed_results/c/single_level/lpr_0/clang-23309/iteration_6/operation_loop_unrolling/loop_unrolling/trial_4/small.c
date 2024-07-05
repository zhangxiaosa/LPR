#include<stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned p;
void fn7(p1) { p = p1; }

long v;
short w;
short ac = 1L;

int main() {
  long am = 1L;
  int an;
  
  if (an = 250UL) {
    unsigned p2 = ac || (an = 3) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  
  if (an = 250UL) {
    unsigned p2 = ac || (an = 2) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  
  if (an = 250UL) {
    unsigned p2 = ac || (an = 1) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  
  fn7(v);
  printf("checksum = %X\n", p);
  return 0;
}