#include <stdio.h>

long fn2(long p1, long p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn5(long p1, long p2) { return 0x41AEA787L; }

unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }

long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13L;
long long ag[4];
long ah;
long ai;
long ak;
unsigned al;
long am = 0x41AEA787L;
long ao;
unsigned ap;
long aq;

long fn12() {
  long au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn2(ap, 1L) != 0), ak) && 0x57L)) > 2)) {
        f = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %lX\n", f);
  return 0;
}