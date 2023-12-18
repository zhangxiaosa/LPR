#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn5(int p1, int p2) { return 1110486715; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13L;
long ag0, ag1, ag2, ag3;
int ah;
int ai;
long ak;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int fn12() {
  int au0, au1, au2, au3, au4;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn6(aq, fn5(ai, au4_1_5 = fn8(~(fn2(ap, 1L) != 0), ak) &&
                                              0x57L)) > 2)) {
        f = am;
        ag3 = au4_1_5;
      } else
        ao = au4_1_5;
    return f;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}