#include <stdio.h>

long fn2(long p1, long p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
int fn6(int p1, int p2) { return p2; }
int fn7(int p1, int p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

int v;
int w = 0xDC6F3D13L;
long long ag[4];
short ah;
long ak;
unsigned am = 0x41AEA787L;
int ao;
int ap;
int aq;

int main() {
  int au_1[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4UL, fn6(aq, au_1[4][1][5] =
                                     fn8(~(fn3(ak, fn2(ap, 1L)) != 0), ak) &&
                                     0x57L)) > 2)) {
        v = am;
        ag[3] = au_1[4][1][5];
      } else
        ao = au_1[4][1][5];
    break;
  }

  printf("checksum = %d\n", v);
  return 0;
}