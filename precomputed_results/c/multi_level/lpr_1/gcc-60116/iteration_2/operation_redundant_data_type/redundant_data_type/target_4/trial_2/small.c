#include <stdio.h>

unsigned fn2(unsigned p1, unsigned p2) { return p1 && p2 ? p1 : p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return 0x41AEA787UL; }

unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13UL; }

unsigned fn8(unsigned p1, unsigned long long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13UL;
unsigned long long ag[4];
unsigned ah;
unsigned ai;
unsigned ak;
unsigned al;
unsigned am = 0x41AEA787UL;
unsigned ao;
unsigned ap;
unsigned aq;

unsigned fn12() {
  unsigned au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn2(ap, 1UL) != 0), ak) && 0x57UL)) > 2)) {
        f = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}