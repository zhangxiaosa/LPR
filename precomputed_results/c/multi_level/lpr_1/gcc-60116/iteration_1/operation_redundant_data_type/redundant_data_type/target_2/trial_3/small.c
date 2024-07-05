#include <stdio.h>

long fn2(long p1, long p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn5(char p1, long p2) { return 0x41AEA787L; }
long fn6(long p1, long p2) { return 0xDC6F3D13L; }
long fn7(long p1, long p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }
long f;
long w = 0xDC6F3D13L;
long long ag[4];
long ah;
char ai;
long aj;
long ak;
long al;
int am = 0x41AEA787L;
int ao;
long ap;
int aq;
long fn12() {
  long au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4L, fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) && 0x57L))) > 2)) {
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