#include <stdio.h>

unsigned long q;
long v;
unsigned long w = 0xDC6F3D13;
long long ag[4];
long ah;
long ai;
long aj;
long ak;
unsigned long al;
long am = 0x41AEA787;
long an;
long ao;
unsigned long ap;
unsigned long aq;

long fn2(long p1, long p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
long fn4(long p1, long p2) { return p1; }
long fn5(long p1, long p2) { return p2; }
unsigned long fn6(unsigned long p1, unsigned long p2) { return p2; }
unsigned long fn7(unsigned long p1, unsigned long p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

long fn12() {
  long au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4UL, fn6(aq, fn5(ai, au[4][1][5] =
                                        fn8(~fn4(fn3(aj, fn2(ap, 1L)) != 0, an),
                                            ak) &&
                                        0x57L))) > 2)) {
        v = (long)am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

long main() {
  fn12();
  q = v;
  printf("checksum = %lu\n", q);
  return 0;
}
