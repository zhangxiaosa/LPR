#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned int p;
long int v;
int w;
unsigned int ab;
unsigned int ac = 1L;

int fn13() {
  int al = 3L;
  int am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an == 250UL) {
      ab = fn5(ab, ac) || (an = w) == 0x294A85636008822L;
      int ao = 0xBCD1L;
      if (fn2(ao - fn4(fn6(am, an), 0xECL), ab) & 1)
        v = 1;
    }
  return (int)al;
}

int main() {
  fn13();
  p = (int)v;
  printf("checksum = %x\n", p);
  return 0;
}