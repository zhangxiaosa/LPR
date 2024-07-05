#include <stdio.h>

long q;
long v;
unsigned w = 0xDC6F3D13L;
long long ag_3;
long ai;
long ak;
long ao;
unsigned ap;

long fn2(long p1, long p2) { return p1 && p2 ? p1 : p1 % p2; }
long long fn3(long long p1, long long p2) { return p2; }
long fn5(long p1, long p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long long p1, long long p2) { return p1 + p2; }

int main() {
  long au_0[5][2][10];
  for (ak = 0;;) {
    for (ai = 0; ai <= 3; ai += 1)
      if (w >= (fn7(4UL, fn7(4UL, fn5(ai, au_0[4][1][5] = fn8(~(fn3(0, fn2(ap, 1L)) != 0), ak) && 0x57L))) > 2)) {
        v = 0x41AEA787LL;
        ag_3 = (long long)au_0[4][1][5];
      } else
        ao = au_0[4][1][5];
    q = (long) v;
    printf("checksum = %lu\n", q);
    return 0;
  }
}