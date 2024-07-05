#include <stdio.h>

long fn2(long long p1, long long p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long long p1, long long p2) { return p2; }

unsigned long long fn6(unsigned long long p1, unsigned long long p2) { return p2; }

unsigned long long fn7(unsigned long long p1, unsigned long long p2) { return p1; }

long long fn8(long long p1, long long long p2) { return p1 + p2; }

int v;
unsigned long long w = 0xDC6F3D13LL;
long long ag[4];
short ah;
long ak;
unsigned long long am = 0x41AEA787LL;
int ao;
unsigned long long ap;
unsigned long long aq;

int main() {
  int au_1[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3ULL; ah += 1)
      if (w >= (fn7(4ULL, fn6(aq, au_1[4][1][5] = fn8(~(fn3(ak, fn2(ap, 1LL)) != 0), ak) && 0x57ULL)) > 2)) {
        v = am;
        ag[3] = fn8(~(fn3(ak, fn2(ap, 1LL)) != 0), ak) && 0x57ULL;
      } else
        ao = au_1[4][1][5];
    break;
  }
  printf("checksum = %d\n", v);
  return 0;
}