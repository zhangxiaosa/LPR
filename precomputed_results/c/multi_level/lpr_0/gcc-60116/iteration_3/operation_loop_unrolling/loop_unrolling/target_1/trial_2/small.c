#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn3(int p1, int p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(int p1, long long p2) { return p1 + p2; }

int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
int ak;
int ao;
unsigned ap;

int main() {
  int au_1[5][2][10];

  // Unrolled loop with 4 iterations
  for (ak = 0; ak <= 3; ak += 4) {
    // Iteration 1
    if (w >= (fn7(4UL, fn6(0xDC6F3D13L, au_1[4][1][5] = fn8(~(fn3(ak, fn2(ap, 1L)) != 0), ak) && 0x57UL)) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au_1[4][1][5];
    } else
      ao = au_1[4][1][5];

    // Iteration 2
    if (w >= (fn7(4UL, fn6(0xDC6F3D13L, au_1[4][1][5] = fn8(~(fn3(ak + 1, fn2(ap, 1L)) != 0), ak + 1) && 0x57UL)) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au_1[4][1][5];
    } else
      ao = au_1[4][1][5];

    // Iteration 3
    if (w >= (fn7(4UL, fn6(0xDC6F3D13L, au_1[4][1][5] = fn8(~(fn3(ak + 2, fn2(ap, 1L)) != 0), ak + 2) && 0x57UL)) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au_1[4][1][5];
    } else
      ao = au_1[4][1][5];

    // Iteration 4
    if (w >= (fn7(4UL, fn6(0xDC6F3D13L, au_1[4][1][5] = fn8(~(fn3(ak + 3, fn2(ap, 1L)) != 0), ak + 3) && 0x57UL)) > 2)) {
      v = 0x41AEA787L;
      ag[3] = au_1[4][1][5];
    } else
      ao = au_1[4][1][5];
  }

  printf("checksum = %u\n", v);

  return 0;
}