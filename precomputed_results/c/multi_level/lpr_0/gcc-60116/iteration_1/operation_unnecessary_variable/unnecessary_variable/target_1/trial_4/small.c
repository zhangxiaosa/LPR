#include <stdio.h>

long fn2(long p1, long p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long ak;
unsigned am = 0x41AEA787L;
int ao;
unsigned ap;
unsigned aq;

int main() {
  v = am;
  ag[3] = fn8(~(fn3(ak, fn2(ap, 1L)) != 0), ak) && 0x57UL;

  printf("checksum = %u\n", v);
  return 0;
}