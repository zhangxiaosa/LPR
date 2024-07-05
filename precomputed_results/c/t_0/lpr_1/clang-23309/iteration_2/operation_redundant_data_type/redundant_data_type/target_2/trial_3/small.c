#include <stdio.h>

unsigned fn4(unsigned p1, unsigned p2) { return p1; }

unsigned p;
short t;
short w;
long ac = 1L;

int main() {
  short an;
  short ao;
  
  for (w = 3; w; w -= 1) {
    if (an == 250U) {
      t = ac || (an = w) == 0x294A85636008822DL;
      ao = 0xBCD1;
      
      if ((short)(ao - (short)fn4(1L - (short)an, 0xEC)) - t & 1U)
        p = 1U;
    }
  }
  
  printf("checksum = %hX\n", p);
  return 0;
}