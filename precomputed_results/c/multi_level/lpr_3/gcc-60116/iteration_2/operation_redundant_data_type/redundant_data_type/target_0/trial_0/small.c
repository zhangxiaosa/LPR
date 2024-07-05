#include <stdio.h>

unsigned q;
signed v;
unsigned w = 0xDC6F3D13L;
signed ai;
signed ao;
unsigned ap;

unsigned fn7(unsigned p1, unsigned p2) {
  return p1;
}

signed fn5(signed p1, signed p2) {
  return p2;
}

unsigned fn2(signed p1, signed p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

signed main() {
  signed au_0[5][2][10];
  
  for (ao = 0;;) {
    for (ai = 0; ai <= 3; ai += 1) {
      if (w >= (fn7(4UL, fn7(4UL, fn5(ai, au_0[4][1][5] = ~(fn3(0, fn2(ap, 1L))) != 0, ao) && 0x57L))) > 2) {
        v = 0x41AEA787L;
        au_0[4][1][5] = ao;
      }
    }

    q = v;
    printf("checksum = %u\n", q);
    return 0;
  }
}