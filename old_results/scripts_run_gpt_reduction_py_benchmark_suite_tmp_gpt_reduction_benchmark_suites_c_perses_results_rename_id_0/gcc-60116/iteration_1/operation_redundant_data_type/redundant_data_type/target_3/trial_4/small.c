#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
short fn3(short p1, short p2) { return p2; }
short fn6(short p1, short p2) { return p2; }
short fn7(short p1, short p2) { return p1; }
short fn8(short p1, short p2) { return p1 + p2; }

short v;
short w = 0xDC6F3D13L;
short ag[4];
short ah;
short ak;
short am = 0x41AEA787L;
short ao;
short ap;
short aq;

int main() {
  short au_1[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4, fn6(aq, au_1[4][1][5] =
                                     fn8(~(fn3(ak, fn2(ap, 1)) != 0), ak) &&
                                     0x57)) > 2)) {
        v = am;
        ag[3] = au_1[4][1][5];
      } else
        ao = au_1[4][1][5];
    break;
  }

  printf("checksum = %d\n", v);
  return 0;
}