#include <stdio.h>

char fn4(p1) { return p1; }

unsigned p;
int t;
long v;
short ac = 1L;
int main() {
  int an;
  
  // Unrolled loop iteration 1
  if (an = 250UL) {
    t = ac || (an = 3) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an)) - t & 1)
      v = 1UL;
  }
  
  // Unrolled loop iteration 2
  if (an = 250UL) {
    t = ac || (an = 2) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an)) - t & 1)
      v = 1UL;
  }
  
  // Unrolled loop iteration 3
  if (an = 250UL) {
    t = ac || (an = 1) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if ((ao - fn4(1L - an)) - t & 1)
      v = 1UL;
  }
  
  p = v;
  printf("checksum = %d\n", p);
  return 0;
}