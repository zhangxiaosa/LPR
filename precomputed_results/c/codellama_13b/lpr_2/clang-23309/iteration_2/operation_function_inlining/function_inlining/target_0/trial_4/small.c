
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p1 - p2; }

int main() {
  int v = 0, t = 0, ac = 1;
  unsigned char w = 0;
  short p;
  int ab = 0;

  int al = 3;
  int am = 1;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    int p2 = fn5(ab, ac) || (an == 0x294A85636008822D);
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1)
      v = 1;
  }
  p = al;
  printf("checksum = %X\n", p);
  return 0;
}
