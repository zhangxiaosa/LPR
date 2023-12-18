#include <stdio.h>

unsigned q;
signed v;
unsigned w = 0xDC6F3D13L;
long long ag_3;
signed ai;
long ak;
unsigned al;
signed an;
signed ao;
unsigned ap;
unsigned aq;

long fn2(signed p1, signed p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p2; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

long long fn8(long p1, long long p2) { return p1 + p2; }

signed main() {
  signed au_0[5][2][10];

  for (ak = 0;;) {
    for (ai = 0; ai <= 3; ai += 1) {
      unsigned fn6_result;
      {
         signed fn2_result = ((fn3(0, fn2(ap, 1L)) != 0) ? fn2(ap, 1L) : (fn2(ap, 1L) % 1L));
         signed fn8_result = ~(fn2_result) + ak;
         signed fn8_condition = (fn8_result && 0x57L);
         au_0[4][1][5] = fn8_result;
         fn6_result = fn8_condition;
      }

      if (w >= fn7(4UL, fn6_result) > 2) {
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