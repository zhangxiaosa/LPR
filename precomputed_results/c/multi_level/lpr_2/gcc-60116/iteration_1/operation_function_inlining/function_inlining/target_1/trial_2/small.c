#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }

char fn4(char p1, char p2) { return p1; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

int v;
unsigned w = 0xDC6F3D13L;
long long ak;
char an;
unsigned ao;

int main() {
  unsigned ap;
  long aj;
  short ah;
  
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      unsigned result = 4UL;
      if (w >= (result = ~(fn4(ap != 0, an)) + ak && 0x57L) > 2) {
        v = 0x41AEA787L;
        result = ap;
      } else {
        ao = result;
      }
    }
    break;
  }
  
  printf("checksum = %X\n", v);
  return 0;
}
