#include <stdio.h>

unsigned q;
signed v;
unsigned w = 0xDC6F3D13L;
long long ag_3;
signed ai;
long ak;
unsigned al;
signed an;
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
  signed au_0[5][2][10];
  for (ak = 0;;) {
    for (ai = 0; ai <= 3; ai += 1) {
      if (w >= (fn7(4UL, fn6(aq, fn5(ai, au_0[4][1][5] =
                                                ((~0) && 0x57L) + ak))) > 2)) {
        v = 0x41AEA787L;
        ag_3 = ((~0) && 0x57L) + ak;
      } else {
        // ao = au_0[4][1][5];  -- ao optimization removed
      }
    }
    return al;
  }
}

signed main() {
  fn12();
  q = v;
  printf("checksum = %d\n", q);
  return 0;
}