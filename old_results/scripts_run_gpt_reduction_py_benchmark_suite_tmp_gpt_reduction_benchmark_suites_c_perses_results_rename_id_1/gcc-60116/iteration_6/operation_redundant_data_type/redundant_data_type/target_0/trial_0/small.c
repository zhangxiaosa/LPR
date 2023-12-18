#include <stdio.h>

original data type fn2(original data type p1, original data type p2) { return p1 && p2 ? p1 : p1 % p2; }
original data type fn5(original data type p1, original data type p2) { return 1110486715; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
original data type fn8(original data type p1, original data type p2) { return p1 + p2; }
unsigned f;
unsigned w = 0xDC6F3D13L;
original data type ag_3;
original data type ah;
original data type ak;
original data type am = 0x41AEA787L;
original data type ao;
unsigned ap;
original data type main() {
  original data type au_4_1_5;
  ak = 0;
  for (ah = 0; ah <= 3; ah += 1)
    if (w >= (fn6(0, fn5(1110486715, au_4_1_5 = fn8(~(fn2(ap, 1L) != 0), ak) &&
                                                0x57L)) > 2)) {
      f = am;
      ag_3 = au_4_1_5;
    } else
      ao = fn8(~(fn2(ap, 1L) != 0), ak) && 0x57L;
  printf("checksum = %X\n", f);
  return 0;
}