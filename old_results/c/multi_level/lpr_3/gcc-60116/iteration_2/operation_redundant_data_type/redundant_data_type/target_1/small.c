#include <stdio.h>

unsigned q;
signed v;
unsigned w = 0xDC6F3D13L;
signed long long ag_3;
signed ai;
signed ak;
signed ao;
unsigned ap;

signed fn2(signed p1, signed p2) { return p1 && p2 ? p1 : p1 % p2; }

signed fn3(signed p1, signed p2) { return p2; }

signed fn5(signed p1, signed p2) { return p2; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

signed long long fn8(signed p1, signed long long p2) { return p1 + p2; }

signed main() {
  signed au_0[5][2][10];

  for (ak = 0;;) {
    for (ai = 0; ai <= 3; ai += 1) {
      if (w >=
          (fn7(4UL, fn7(4UL, fn5(ai, au_0[4][1][5] =
                                         fn8(~(fn3(0, fn2(ap, 1L)) != 0), ak) &&
                                         0x57L))) > 2)) {
        v = 0x41AEA787L;
        ag_3 = au_0[4][1][5];
      } else {
        ao = au_0[4][1][5];
      }
    }

    q = v;
    printf("checksum = %d\n", q);

    return 0;
  }
}