#include <stdio.h>

unsigned int p;
unsigned long v;
unsigned short w;
unsigned short ac = 1L;

unsigned int fn6(unsigned int p1, unsigned int p2) { 
  return p1 - p2; 
}

int main() {
  int an;
  unsigned int p2;
  unsigned short ao;
  
  for (w = 3; w; w--) {
    if (an == 250U) {
      p2 = ac || (an = w);
      ao = 0xBCD1U;
      
      if ((ao - (fn6(1L, an) - 0xECL)) - ac & 1U)
        v = 1U;
    }
  }
  
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}