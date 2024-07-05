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
short ao;
short ap;
short aq;

int main() {
  short au_1[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3U; ah += 1)
      if (w >= (fn7((short)4UL, fn6(aq, au_1[4][1][5] = fn8(~(fn3(ak, fn2(ap, (short)1L)) != 0), ak)) && 0x57UL)) > 2) {
        v = 0x41AEA787L;
        ag[3] = au_1[4][1][5];
      } else
        ao = au_1[4][1][5];
    break;
  }
  printf("checksum = %hd\n", v);
  return 0;
}