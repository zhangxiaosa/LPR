#include <stdio.h>

unsigned int fn2(unsigned int p1, unsigned int p2) { return p1 && p2 ? p1 : p1 % p2; }
unsigned int fn3(unsigned int p1, unsigned int p2) { return p2; }

unsigned int v;
unsigned int w = 0xDC6F3D13L;
unsigned int ag[4];
unsigned int ah;
unsigned int ak;
unsigned int am = 0x41AEA787L;
unsigned int ao;
unsigned int ap;
unsigned int aq;

int main() {
  unsigned int au_1[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4UL, fn6(aq, au_1[4][1][5] =
                                     fn8(~(fn3(ak, fn2(ap, 1L)) != 0), ak) &&
                                     0x57L)) > 2)) {
        v = am;
        ag[3] = au_1[4][1][5];
      } else
        ao = au_1[4][1][5];
    break;
  }

  printf("checksum = %u\n", v);
  return 0;
}