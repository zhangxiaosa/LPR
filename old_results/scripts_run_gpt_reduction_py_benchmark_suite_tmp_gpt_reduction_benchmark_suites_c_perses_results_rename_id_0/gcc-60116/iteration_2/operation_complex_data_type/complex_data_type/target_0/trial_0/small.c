#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn3(int p1, int p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(int p1, long long p2) { return p1 + p2; }

int v;
unsigned int w_val = 0xDC6F3D13L;
long long ag_val[4];
int ah;
int ak;
int ao;
unsigned ap;
unsigned aq;

int main() {
  int au_1_val[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3U; ah += 1) {
      if (w_val >= (fn7(4UL, fn6(aq, au_1_val[4][1][5] =
                                         fn8(~(fn3(ak, fn2(ap, 1L)) != 0), ak) &&
                                         0x57UL)) > 2)) {
        v = 0x41AEA787L;
        ag_val[3] = au_1_val[4][1][5];
      } else {
        ao = au_1_val[4][1][5];
      }
    }
    break;
  }

  printf("checksum = %u\n", v);
  return 0;
}