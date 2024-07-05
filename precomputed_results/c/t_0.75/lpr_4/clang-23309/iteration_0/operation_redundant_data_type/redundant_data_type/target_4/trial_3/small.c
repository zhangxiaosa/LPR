#include <stdio.h>

typedef unsigned int f;
char fn4(char p1, char p2) { return p1; }
f p;
int t;
long v;
short w;
short ac = 1L;

int main() {
  for (w = 3; w; w -= 1) {
    long am = 1L;
    int an;
    if (an == 250UL) {
      t = ac || (an = w) == 0x294A85636008822L;
      short ao = 0xBCD1L;
      if ((ao - fn4(am - an, 0xECL)) - t & 1U)
        v = 1U;
    }
  }
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}