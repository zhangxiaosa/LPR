#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
short fn3(long p1, long p2) { return p2; }
short fn5(short p1, int p2) { return 0x41AEA787L; }
short fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
short fn7(unsigned p1, unsigned p2) { return p1; }
short fn8(long p1, long long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13L;
short ag[4];
short ah;
short ai;
short aj;
short ak;
short al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int main() {
  short au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4UL, fn6(aq, fn5(ai, au[4][1][5] =
                                        fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) &&
                                        0x57L))) > 2)) {
        f = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
  printf("checksum = %X\n", (unsigned)f);
  return 0;
}