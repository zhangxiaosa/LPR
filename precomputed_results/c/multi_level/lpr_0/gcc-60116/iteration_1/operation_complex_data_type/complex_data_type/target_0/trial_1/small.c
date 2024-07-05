#include <stdio.h>

long fn2(long p1, long p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }

int main() {
  long ag_value = 0;
  short ah;
  long ak;
  unsigned am = 0x41AEA787L;
  int ao = 0;
  unsigned w = 0xDC6F3D13L;
  int v;
  int au_1[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3U; ah += 1) {
      unsigned aq = fn6(ak, 1L);
      unsigned ap = fn2(ak, 1L);
      au_1[4][1][5] = fn8(~(fn3(ak, ap) != 0), ak) && 0x57UL;
      if (w >= (fn7(4UL, aq) > 2)) {
        v = am;
        ag_value = au_1[4][1][5];
      } else {
        ao = au_1[4][1][5];
      }
    }
    break;
  }

  printf("checksum = %ld\n", ag_value);

  return 0;
}