#include <stdio.h>

unsigned q;
signed v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
signed ah;
signed ai;
long aj;
long ak;
unsigned al;
signed am = 0x41AEA787L;
signed an;
signed ao;
unsigned ap;
unsigned aq;

long fn2(signed p1, signed p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
signed fn4(signed p1, signed p2) { return p1; }
signed fn5(signed p1, signed p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

long fn12() {
  signed au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4UL, fn6(aq, fn5(ai, au[4][1][5] =
                                        fn8(~fn4(fn3(aj, fn2(ap, 1L)) != 0, an),
                                            ak) && 0x57L))) > 2)) {
        v = (signed)am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

signed main() {
  fn12();
  q = v;
  printf("checksum = %u\n", q);
  return 0;
}